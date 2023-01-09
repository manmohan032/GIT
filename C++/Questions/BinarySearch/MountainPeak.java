public class MountainPeak {
    static int peak(int arr[])
    {
        int s=0,e=arr.length-1;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]>arr[mid+1])
                e=mid;
            else
                s=mid+1;//as my mid + 1 already greater than mid so peak is already changed.
        }
        return arr[e];
    }
    public static void main(String[] args) {
        int arr[]={1,2,3,4,6,89,5,4,3,2};
        System.out.print(peak(arr));
    }
}
