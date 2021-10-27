/*
write a program to count no of even digit numbers in an array

*/

import java.lang.*;
import java.util.*;


public class EvenDigit{
    public static void main(String[] args) {

        int[] arr = {12, 44, 3454, 6839, 239402};
        int ans = digit(arr);
        System.out.println("answer is = " + ans);
        
    }
    static int digit(int[] array){
        int count = 0;
        if(array.length == 0)
           return -1;
        for(int i = 0; i < array.length; i++){
            int ans = 0;
            while(array[i]>0){
                array[i] = array[i]/10;
                ans++;

            }
            if(ans % 2 == 0){
                count++;
            }
        }

        return count;
    }
}
