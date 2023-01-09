#include<stdio.h>
#include<stdlib.h>
struct que
{
    int size;
    int f,r;
    int *arr;
};
int isempty(struct que*q)
{
    if(q->f==q->r)
        return 1;
    return 0;
}
void enque(struct que *q,int data)
{
    if(q->r==q->size)
    {
        printf("que is full");
        return;
    }
    int p=q->r;
    q->arr[p]=data;
    q->r++;
}
int dque(struct que*q)
{
    if(!isempty(q))
    {
        int p=q->f;
        q->f++;
        return q->arr[p];
    }
    return 0;
}
int main()
{
    struct que q;
    q.size=100;
    q.f=q.r=0;
    q.arr=(int *)malloc(100);
    int visited[7]={0};
    int graph[7][7]={
        {0,1,1,1,0,0,0},//   0--1
        {1,0,1,0,0,0,0},//   |\|
        {1,1,0,1,1,0,0},//  3--2
        {1,0,1,0,1,0,0},//  \ /
        {0,0,1,1,0,1,1},//   4
        {0,0,0,0,1,0,0},//  /\
        {0,0,0,0,1,0,0} // 5  6 
    };
    int root=0;
    visited[root]=1;
    enque(&q,root);
    while(!isempty(&q))
    {
        int node=dque(&q);
        for(int j=0;j<7;j++)
        if(graph[node][j]==1&&visited[j]==0)
        {
            enque(&q,j);//this will create a que where all elements are present of graph without any repetation.
            visited[j]=1;
        }
    }
    for(int i=0;i<7;i++)
        printf("%d",q.arr[i]);
    return 0;
}