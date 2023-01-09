#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    return 0; 
}
int main()
{
    int arr[] = { -5, -2, 5, 2,
                 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);// took this array from gfg
    int i,pos=0,neg=0;
    int j;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<0&&arr[i+1]<0)
        {
            for(j=i+2;j<n;j++)
            {
                if(arr[j]>0)
                {
                    swap(&arr[i+1],&arr[j]);
                }
            }
        }
        if(arr[i]>0&&arr[i+1]>0)
        {
            cout<<"ada3"<<endl;
            for(j=i+2;j<n;j++)
            {
                cout<<"ada212"<<endl;
                if(arr[j]<0)
                {
                    cout<<"ada2"<<endl;
                    swap(&arr[i+1],&arr[j]);
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}