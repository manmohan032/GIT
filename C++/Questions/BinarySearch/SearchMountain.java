import java.util.Arrays;

public class SearchMountain {
    static int[] search(int arr[],int target)
    {
        int s=0,e=arr.length-1;
        int mid=peak(arr);
        int ans[]=new int[2]; 
        ans[0]= binarySearch(arr, s, mid, target, true);
        ans[1]= binarySearch(arr, mid+1, e, target, false);
        return ans;
    }
    static int peak(int arr[])
    {
        int s=0,e=arr.length-1;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]>arr[mid+1])
                e=mid;
            else
                s=mid+1;
        }
        return e;
    }
    static int binarySearch(int arr[],int s,int e,int target,boolean isAsnd)
    {
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==target)
                return mid;
            if(isAsnd)
            {
                if(arr[mid]>target)
                    e=mid-1;
                else 
                    s=mid+1;
            }
            else
            {
                if(arr[mid]>target)
                    s=mid+1;
                else
                    e=mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5,3,1};
        System.out.print(Arrays.toString(search(arr, 2)));
    }
}
/*[1,2,3,4,5,3,1]
2*/
