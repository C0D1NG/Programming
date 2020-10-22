import java.util.*

fun gcd( a: Int, b: Int): Int{
    if(b==0)
        return a;
    return gcd(b, a%b);
}
fun main(args: Array<String>) {

    val reader = Scanner(System.`in`);
    print("Enter a number: ");
    val a: Int = reader.nextInt();
    val b: Int = reader.nextInt();
    reader.close()
    var result = gcd(a,b);
    println(result);
}