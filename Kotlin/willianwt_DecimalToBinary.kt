import java.lang.Integer.toBinaryString
import java.util.Scanner

fun main(args: Array<String>) {

    val reader = Scanner(System.`in`)
    print("Enter a number to convert to Binary: ")

    val integer:Int = reader.nextInt()

    println("The Binary of $integer is ${toBinaryString(integer)}")
}