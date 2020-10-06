import java.util.*;

public class HandShakes {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        System.out.println(handShakes(N));
    }

    public static int handShakes(int n) {
        return (n*(n-1))/2;
    }
}
