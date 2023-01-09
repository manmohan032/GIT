#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int ld=t%10;
    switch (ld)
    {
    case 2:
        printf("Two");
        break;
    case 4:
        printf("Four");
        break;
    case 6:
        printf("Six");
        break;
    case 8:
        printf("Eight");
        break;
    default:
        printf("Odd Digit at the Unit Place\n");//zero is considered as odd here
        return 0;
        break;
    }
    
    return 0;
}