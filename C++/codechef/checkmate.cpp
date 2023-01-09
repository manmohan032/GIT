#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int xk,yk,x1,y1,x2,y2;
        scanf("%d %d\n%d %d\n%d %d",&xk,&yk,&x1,&y1,&x2,&y2);
        if((xk+yk==2)||(xk+yk==16))
        {
            if(x1!=x2&&((xk-x1)!=1&&(xk-x1)!=-1)&&((xk-x2)!=1&&(xk-x2)!=-1))
            {
                printf("Yes\n");
            }
            else if(y1!=y2&&((yk-y1)!=1&&(yk-y1)!=-1)&&((yk-y2)!=1&&(yk-y2)!=-1))
            {
                printf("Yes\n");
            }
            else{    
                printf("No\n");
            }
            
        }
        else if((xk%8==1||xk%8==0)&&yk!=1)
        {
            if(((x1%8==2||x2%8==2)&&y1!=y2)&&(xk%8==1))
            {
                printf("Yes\n");
            }
            else if(((x1%8==7||x2%8==7)&&y1!=y2)&&(xk%8==0))
            {
                printf("Yes\n");
            } 
            else{
                printf("No\n");
            }
        }
        else if((yk%8==1||yk%8==0))
        {
            if(((y1%8==2||y2%8==2)&&x1!=x2)&&(yk%8==1))
            {
                printf("Yes\n");
            }
            else if(((y1%8==7||y2%8==7)&&x1!=x2)&&(yk%8==0))
            {
                printf("Yes\n");
            } 
            else{
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}