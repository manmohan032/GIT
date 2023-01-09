#include <bits/stdc++.h>
using namespace std ;

/*method 1:
class sort
{
    public:
    void swap(int *a,int *b)
    {
        int t= *a;
        *a=*b;
        *b=t;
    }
    void quick_sort(int arr[],int s,int l)
    {
        int i=s;
        int j=l;
        if(l-s<=0)
        {
            return;
        }
        int point =(s+l)/2;
        while(i<=j)
        {
            while(arr[i]<arr[point])
            {
                i++;
            }
            while(arr[j]>arr[point])
            {
                j--;
            }
            if(i<=j)
            {
                swap(&arr[i],&arr[j]);
                i++;
                j--;
            }
        }
        quick_sort(arr,s,i-1);
        quick_sort(arr,i,l);

    }
};
class kth_min:private sort
{
    public:
    int find(int arr[],int s,int e,int k)
    {
        quick_sort(arr,s,e-1);
        return arr[k-1];
    }
};

int main()
{
    int a[]={1,2,0,4,5,6,9,3,8};
    kth_min ob;
    int ans=ob.find(a,0,9,4);
    cout<<ans;
    return 0;
}*/
int main()
{
    int a[]={7,10,4,20,15};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    set<int> s(a,a+n);
    set<int>::iterator itr =s.begin();
    advance(itr,k-1);
    cout<<*itr<<endl;
    return 0;
}