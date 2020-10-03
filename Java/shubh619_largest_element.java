 publi class shubh619_largest_element
 {
 public static void main(String args[])
  {
      Scanner s=new Scanner(System.in);
      
      int n=s.nextInt();
     int [] arr=new ArrayList[n];
      int max=Integer.MAX_VALUE;
      for(int i=0;i<n;i++)
      {
          arr[i]=s.nextInt();
          max=Math.max(arr[i],max)
      }
      System.out.println(max);


    }
    
}
    
