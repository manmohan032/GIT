
class RotatedBinarySearch
{
    static boolean rbs(int arr[],int s,int e,int n)
    {
        if(s>e)
            return false;
        
        int mid= (s+e)/2;
        if(arr[mid]==n)
            return true;
        if(arr[mid]>arr[s])
        {
            if(arr[mid]>n&&n>=arr[s])
                return rbs(arr, s, mid-1, n);
            else
                return rbs(arr, mid+1,e,n);
        }
        else
        {
            if(arr[mid]<n&&arr[e]>=n)
                return rbs(arr, mid+1, e, n);
            else    
                return rbs(arr, s, mid-1, n);
        }
    }
    public static void main(String[] args) {
        int arr[]={11,13,15,16,5,6,7,8,9,10};
        System.out.println(rbs(arr, 0, 9, 10));
    }
}