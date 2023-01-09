// C++ program to demonstrate working of an algorithm that finds
// an element in an array of infinite size
#include<bits/stdc++.h>
using namespace std;
 
// Simple binary search algorithm
int binarySearch(int arr[], int start, int end, int target)
{
    if (end>=start)
    {
        int mid = start + (end - start)/2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            return binarySearch(arr, start, mid-1, target);
        return binarySearch(arr, mid+1, end, target);
    }
    return -1;
}
int findPos(int arr[], int key)
{
    int start = 0, end = 1;
    int val = arr[0];
 
    // Find h to do binary search
    while (val < key)
    {
        start = end;        // store previous high
        end = 2*end;      // double high index
        val = arr[end]; // update new val
    }
 
    // at this point we have updated low and
    // high indices, Thus use binary search
    // between them
    return binarySearch(arr, start, end, key);
}
 
// Driver program
int main()
{
    int arr[]={1,2,3,4,5,56,67,76,89,98};
    int ans = findPos(arr, 98);
    if (ans==-1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
}