import java.util.Scanner;
public class IsPrime {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        s.close();
       System.out.println(isprime(n)); 
    }
  static boolean  isprime(int n){
      int C=2;
      while(C*C<=n){
        if(n%C==0){
            return false;
        }
        C++;
      }
      return true;
  }
}
