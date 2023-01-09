#include<stdio.h>
int main(){
int n;
printf("ENTER THE LENGTH OF ARRAY\n");
scanf("%d",&n);
int a[n];
printf("ENTER THE VALUES:\n");
for(int j=0;j<n;j++)
{
    scanf("%d",&a[j]);
}
int b=a[0],c=a[0];
for (int i = 1; i < 5; i++)
{
 if (b<a[i])
 {
    b=a[i];
 }
 if (c>a[i])
 {
     c=a[i];  }
}
printf("max=%d\nmin=%d",b,c);
return 0;
}