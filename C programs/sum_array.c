#include <stdio.h>

void main()
{
    int  n1,m1,n2,m2,i,j;

    printf("Enter the number of rows and collumn for first 2d array : ");
    scanf("%d %d", &n1,&m1);
    int a[n1][m1];
    printf("Enter %d elements for array 1:\n", n1*m1);
    for (i = 0; i < n1; i++)
        for(j = 0;j < m1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the number of rows and collumn for first 2d array : ");
    scanf("%d %d", &n2,&m2);
    int b[n2][m2];

    printf("Enter %d elements for array 2:\n", n2*m2);
    for (i = 0;i < n2; i++)
        for(j = 0;j < m2; j++)
            scanf("%d",&b[i][j]);


    
    printf("the 1st 2d array is : \n", n2*m2);
    for (i = 0; i < n1; i++)
    {
        for(j = 0;j < m1; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    
    printf("the 2nd 2d array is : \n", n2*m2);
    for (i = 0; i < n2; i++)
    {
        for(j = 0;j < m2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    
    if(n1!=n2&&m1!=m2)
    {
        printf("the sum is not possible of these two array as they dont fullfill the rule matrix addition");
    }
    else
    {
        int c[n1][m1];
        for(i=0;i<n1;i++)
            for(j=0;j<n1;j++)
                c[i][j]=a[i][j]+b[i][j];

        printf("addition of two array are:\n");

        for (i = 0; i < n1; i++)
        {
            for(j = 0;j < m2; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
}