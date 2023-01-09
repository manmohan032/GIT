#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x,t;
    
    srand(time(0));
    x=rand()%100+1;
    for(int i=10;i>0;i--)
    {
        scanf("%d",&t);
        if(t==x)
        {
            printf("matched");

        }
        else if(t>x)
        {
            printf("you have %d chances  \n, enter a smaller no.",i);
        }
        else{
            printf("you have %d chances \n, enter a bigger no.",i);
        }
    }
    return 0;
}