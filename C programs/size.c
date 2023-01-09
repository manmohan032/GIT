#include<stdio.h>

void main()
{
    int a;
    char b;
    float c;
    scanf("%d\n %c\n %f",&a,&b,&c);
    printf("size of \n int %d\n char %d\n float %d\n",sizeof(a),sizeof(b),sizeof(c));
}

