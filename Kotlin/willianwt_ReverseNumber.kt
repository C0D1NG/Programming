import java.util.Scanner

fun main(args: Array<String>) {

    val reader = Scanner(System.`in`)
    print("Enter a number: ")

    var num:Int = reader.nextInt()
    var reversed = 0
    while (num != 0) {
        val digit = num % 10
        reversed = reversed * 10 + digit
        num /= 10
    }
    println("The reverse is $reversed")
}