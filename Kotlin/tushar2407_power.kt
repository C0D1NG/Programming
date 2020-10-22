import java.util.*

fun power( a: Int, b: Int): Int{
    if(b==0)
        return 1;
    return a*power(a, b-1);
}
fun main(args: Array<String>) {

    val reader = Scanner(System.`in`);
    print("Enter a number: ");
    val a: Int = reader.nextInt();
    val b: Int = reader.nextInt();
    reader.close()
    var result = power(a,b);
    println(result);
}