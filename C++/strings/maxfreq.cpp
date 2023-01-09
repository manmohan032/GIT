#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main ()
{
    string st1,st2;
    getline(cin,st1);
    
    sort(st1.begin(),st1.end());

    cout<<st1<<endl;
    char c=st1[0],mfc='a';
    int cf=0,mf=0;
    for(int i=0;i<st1.length();i++)
    {
        
        if(st1[i]==c)
        {
            ++cf;
            

        }
        if(mf<cf)
            {
                mfc=c;
                mf=cf;
            }
        else if(st1[i]!=c)
        {
            cf=1;
            c=st1[i];
        }
    }
    cout<<mfc<<"   "<<mf;

    return 0;

}