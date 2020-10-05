import java.util.*

fun main() {
    val reader = Scanner(System.`in`)
    print("Enter a number: ")

    var isPrimeNumber: Boolean = false

    try {
        val num: Int = reader.nextInt()
        if (num!=1) {
            for (i in 2..num / 2) {
                if (num % i == 0) {
                    isPrimeNumber = true
                }
            }
        } else {
            isPrimeNumber = true
        }
        if (isPrimeNumber) {
            println("Is $num prime number? false")
        } else {
            println("Is $num prime number? true")
        }

    }catch (e:InputMismatchException){
        println("Input Number Only")
    }
}