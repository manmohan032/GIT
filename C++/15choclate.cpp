#include <iostream>
using namespace std;
int main()
{
    int t=0,i,c=19,w=c;
    while (c!=0)
    {
        t=t+c;
         

            if(w%3==0)
            {
                c=w/3;
                w=c;
            }
            else
            {
                c=w/3;
                w=c+w%3;
            }

        

    }
    cout<<t;
    return 0;
}