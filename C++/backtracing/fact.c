#include<stdio.h>
int main(){
int n,fact=1;
printf("give");
scanf("%d",&n);
for(int i =1; i<n;i++)
{
    fact=fact*i; 
    //fact=n*i; i=1 fact  5  ;i=2 fact 10 i=3 fact 15
}
printf("%d",&fact);
return(0)
}