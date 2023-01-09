#include <iostream>
using namespace std;

int check()
{
    string s;
    cin>>s;
    char r=' ';
    int pt=0;
    for(char i='A';i<='Z';i++)
    {
        int t=0;
        
        for(int j=0;j<s.length();j++)
        {
            if(i==s.at(j))
            {
                
                t++;
            }

        }
        if(pt<t)
        { 

            pt=t;
            r=i;
        }
    }
    printf("%c\n",r);

    return 0;

}
int main()
{
    int t;
    cin>>t;
    while (t>0)
    {
        check();
        t--;
    }
    return 0;
}