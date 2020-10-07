import java.util.*

fun main(args: Array<String>) {

    val reader = Scanner(System.`in`)
    print("Enter a number: ")
    val n: Int = reader.nextInt()
    reader.close()
    var result = 0
    for (i in 0..n){
        result += i
    }

    println(result)
}