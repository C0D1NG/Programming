fun main(args: Array<String>) {
   println("Enter number of people ");
    val number = Integer.valueOf(readLine());
    println("Maximum number of handshakes possible: "+(number*(number-1))/2);
}