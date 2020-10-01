import java.util.*;
public class animesh288_BinaryToDecimal {
 
  public int BinaryToDecimal(int binaryNumber){
 
    int decimal = 0;
    int p = 0;
    while(true){
      if(binaryNumber == 0){
        break;
      } else {
          int temp = binaryNumber%10;
          decimal += temp*Math.pow(2, p);
          binaryNumber = binaryNumber/10;
          p++;
       }
    }
    return decimal;
  }
 
  public static void main(String args[]){
    animesh288_BinaryToDecimal obj = new animesh288_BinaryToDecimal();
    Scanner ob=new Scanner(System.in);
    System.out.println("enter number");
    int binary=ob.nextInt();
    System.out.println(obj.BinaryToDecimal(binary));


    
  }
}