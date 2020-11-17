    public class LinearSearch{    
    public static int linearSearch(int[] arr, int key){    
            for(int i=0;i<arr.length;i++){    // looping from index 0 to n
                if(arr[i] == key){    
                    return i;    
                }    
            }    
            return -1;    
        }    
        public static void main(String a[]){    
            int[] arr= {10,20,30,40,50,60,70,80,90};    
            int key = 50;    
            System.out.println(key+" is found at index " + linearSearch(arr, key));  
        }    
    }    