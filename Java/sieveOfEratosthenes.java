
public class sieveOfEratosthenes {
    public static boolean[] sieveOfEratosthenes(int n){
        boolean[] arr=new boolean[n+1];
        for(int i=0;i<n;i++){
            arr[i]=true;
        }
        for(int p=2;p*p<=n;p++){
            if(arr[p]==true){
                for(int i=p*p;i<=n;i+=p){
                    arr[i]=false;
                }
            }
        }
        return arr;
    }
    public static void main(String [] args){
        int n=13;
        boolean[] arr=sieveOfEratosthenes(n);
        boolean[] brr=sieveOfEratosthenes(n+1);
        System.out.println("Prime numbers less than n");
        for(int i=2;i<n;i++){
            if(arr[i]==true){
                System.out.print(i+" ");
            }
        }
        System.out.println();
        System.out.println("Prime numbers less than or equal to n");
        for(int i=2;i<n+1;i++){
            if(brr[i]==true){
                System.out.print(i+" ");
            }
        }
        //System.out.println(arr[13]+" "+brr[13]);
    }
}
