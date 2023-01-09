#include<stdio.h>
#include<math.h>
void main()
{
    int c,s,r,hs,lr,hr,rc;
    printf("enter the value for height & length of rectangle ,length of square and radius of circle\n");
    scanf("%d %d %d %d",&hr,&lr,&hs,&rc);
    printf("area of rectangle is = %d\n",hr*lr);
    printf("area of square is = %d\n", (int)pow(hs,2));//    printf("area of square is = %f\n", pow(hs,2));
    printf("area of circle = %f",(3.14)*pow(rc,2));
}