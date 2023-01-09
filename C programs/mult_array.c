#include <stdio.h>

void main()
{
    int  n1,m1,n2,m2,i,j;

    printf("Enter the number of rows and collumn for first 2d array :\t");
    scanf("%d %d", &n1,&m1);
    int a[n1][m1];
    printf("Enter %d elements for array 1:\n", n1*m1);
    for (i = 0; i < n1; i++)
        for(j = 0;j < m1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the number of rows and collumn for first 2d array :\t");
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

    if(m1!=n2)
    {
        printf("The multiplication cannot be done as the rules is not fullfilled\n");
    }
    else
    {
        int c[n1][m2],p=0;
        for (i = 0; i < n1; i++)
        {
            for(j = 0;j < m2; j++)
            {
                int s=0;
                for(int k = 0;k < m1; k++)
                {
                    s+=a[i][k]*b[k][j];
                }
                c[i][j]=s;
            }
        }

        printf("multiplication of two array elements are:\n");

        for (i = 0; i < n1; i++)
        {
            for(j = 0;j < m2; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
}