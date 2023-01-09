#include<stdio.h>

int length(char ch[])
{
    int l=0;
    while(ch[l]!='\0')
    {
        l++;
    }
    return l;
}

void count(char ch[])
{
    int lc=0,lw=0,ll=0;
    for(int i=0;i!=length(ch);i++)
    {
        if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
            lc++;
        if(ch[i]==' '||ch[i]=='.')
            lw++;
        if(ch[i]=='.')
            ll++;
    }
    printf("The no. of char is :%d\n",lc);
    printf("The no. of word is :%d\n",lw);
    printf("The no. of line is :%d\n",ll);
}
void main()
{
    char ch[]="My name is manmohan singh.";
    count(ch);
}