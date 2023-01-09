#include<stdio.h>
#include<stdlib.h>

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

void dfs(int i)
{
    int j;
    printf("%d ",i);
    visited[i]=1;
    for(j=0;j<7;j++)
    {
        if(graph[i][j]&& !visited[j])
         { 
              dfs(j);
         }
    }
}
int main()
{

    dfs(0);
    return 0;
}