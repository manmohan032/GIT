#include<iostream>
using  namespace std;

int main()
{
    int i,n;
    cin>>n;
    cin.ignore();
    char c[n+1];
    
    cin.getline(c, n);//input
    cin.ignore();
    
    cout<<c<<endl;
    int cl=0,ml=0,t=0;
    string st="",cs="";
    
    while(1)
    {
       
        if(c[t]==' ' || c[t]=='\0')
        {
            if(cl>ml)
            {
                ml=cl;
                st=cs;
            }
            cl=0;
            cs="";
        }
        else
        {
            cl++;
            cs+=c[t];
        }
        if(c[t]=='\0')
        {
            break;
        }
        t++;
    }
    cout<<ml<<endl;
    cout<<st;
    return 0;
    
}