#include<iostream>
using namespace std;

template<class T>
class vector{
    T *arr;
    int m;
    public:
    vector(){}
    vector(T *ar)
    {
        arr=ar;
    }
    void add(T e)
    {
        static int p=0;
        arr[p]=e;
        p++;
        m=p;
    }
    void print()
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> vect;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        vect.add(e);
    }
    vect.print();
}