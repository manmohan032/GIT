#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,g,ng=1;
    
    //n = rand()%100+1;
    do
    {
        n=rand();        
    } while (n>100||n<0);
    
    printf("the no. is:\t%d\n",n);
    
        printf("guess the no.\n");
    do
    {
        
    
        scanf("%d",&g);
        if(n<g)
        {
            printf("choose a smaller no.\n");

        }
        else if(n>g)
        {
            printf("choose a bigger no.\n");
            
        }
        else
        {
            printf("Correct guess");
        }
    } while (n!=g);
    
    
    return 0;
}