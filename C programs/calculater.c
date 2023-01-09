#include<stdio.h>
int main()
{
    char c;
    int ans,a,b;
    
    printf("enter the choice for  :\n - for subtraction\n + for addition\n * for multiplication\n / for division\n");
    scanf("%c",&c);
    printf("Enter the first no. ");
    scanf("%d",&a);
    printf("enter the second no. ");
    scanf("%d",&b);

    switch (c)
    {
    case '-':
        ans=a-b;
        printf("ans is %d",ans);
        break;
    case '+':
         ans=a+b;
        printf("ans is %d",ans);
        break;
    case '*':
         ans=a*b;
        printf("ans is %d",ans);
        break;
    case '/':
         ans=a/b;
        printf("ans is %d",ans);
        break;
    default :
        printf("operation is not defined in calculator");
        break;
    }
    return 0;
}

    