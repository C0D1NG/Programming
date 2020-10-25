
fun main() {
    val str1:String = "Hello "
    val str2:String = "World"
    val str3:String = "Hey "

    val num1:Int = 5
    val num2:Int = 4

    //using the greaterValue extension function
    val greaterVal = num1.greaterValue(num2)
    println(greaterVal)

    //invoking the add function with a string object before the .
    println(str3.add(str1,str2))
    println()

}


//extension function to concatenate three strings
fun String.add(s1:String,s2:String): String{
    return this + s1 + s2;
}

//extension function to find the large number between the given two
fun Int.greaterValue(otherNum:Int): Int{
    if(this > otherNum) return this
    else return otherNum;
}

