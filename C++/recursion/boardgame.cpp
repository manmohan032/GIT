
#include<iostream>
using namespace std;

int countpath(int s,int e)
{
    if (s==e)
    {
        
        return 1;

    }


    int count=0;
    for(int i=1;i<=6;i++)
    {
        
        if(i+s<=e)//to only use the value if less than end
        count+=countpath(s+i,e);
    }
    return count;

}
int main()
{
    cout<<countpath(0,9);
}

/*another code running --apni shiksha.
#include<iostream>
using namespace std;

int countpath(int s,int e)
{
    if (s==e)
    {
        //cout<<"s==e"<<s<<endl;1
        return 1;

    }
    if(s>e)
    {
      //  cout<<"s>e"<<s<<endl;3
        return 0;
    }
    //else if(s<e)
    //{
    //    cout<<"s<e"<<s<<endl;3
    //}
    int count=0;
    for(int i=1;i<=6;i++)
    {
        //cout<<countpath(s+i,e)<<endl;
        count+=countpath(s+i,e);
    }
    return count;

}
int main()
{
    cout<<countpath(0,3);
}*/