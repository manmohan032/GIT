public class checkArraySort {
    static boolean check(int arr[],int e,int s)
    {
        if(s>=e)
            return true;
        /*if(arr[s]<=arr[s+1])
            return check(arr, e, s+1);
        else    
            return false;*/
        return arr[s]<arr[s+1] && check(arr, e, s+1);
    }
    public static void main(String[] args) {
        int arr[]={1,8,3,4,5,6,7};
        System.out.println(check(arr, 6, 0));
    }    
}
