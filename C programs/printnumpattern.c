#include<stdio.h>
int main()
{
    char i,j;
    int n;
    char c='A';
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(char j='A';j<='A'+i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}