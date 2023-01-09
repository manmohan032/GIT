#include <iostream>
using namespace std ;

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
        int j=l-1;
        if(l-s<=0)
        {
            return;
        }
        int point =(s+l)/2;
        while(i<=j)
        {
            if(arr[i]<arr[point])
            {
                i++;
            }
            else if(arr[j]>arr[point])
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
int main()
{
    int a[]={1,2,3,4,5,6,9,1,2};
    sort ob;
    ob.quick_sort(a,0,9);
    for(int i=0;i<9;i++)
        cout<<a[i]<<" ";
    return 0;
}