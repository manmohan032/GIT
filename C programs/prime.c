#include<stdio.h>
#include<stdbool.h>  
void main()
{
    int i;
    int a;
    bool j=false;
    printf("the no. is \n");
    scanf("%d",&a);
    
    for (i=2; i<a; i++)
    {
        if(a%i==0)
        {
            j=true;
            break;
        }
    }
    if(j==false)
    {
        printf("prime");

    }
    else{
        printf("not prime");
    }
    

}