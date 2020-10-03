import java.util.Arrays;

public class two_pointer_algo {
    public static boolean two_sum(int a[],int x,int i){
        int j=a.length-1,sum;
        while(i<j){
            sum=a[i]+a[j];
            if(sum<x){
                i++;
            }
            else if (sum>x){
                j--;
            }
            else{
                return true;
            }
        }
        return false;
    }
    public static boolean three_sum(int a[]){
        for(int i=0;i<a.length-2;i++){
            if(two_sum(a,-a[i],i)){
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args){
        int arr[]={2,4,-1,3,-4,0,3};
        Arrays.sort(arr);
        System.out.println("2 sum : "+two_sum(arr,5,0));
        System.out.println("3 sum: "+three_sum(arr));
    }
}
