import java.util.*

fun main(args: Array<String>) {

    val reader = Scanner(System.`in`)
    print("Enter a number: ")
    val n:Int = reader.nextInt()
    reader.close()
    isPositiveOrNegative(n)
}

fun isPositiveOrNegative(n: Int) {
    return if(n > 0) println("$n is positive")
    else if (n < 0) println("$n is negative")
    else println("Zero is not positive or negative")

}