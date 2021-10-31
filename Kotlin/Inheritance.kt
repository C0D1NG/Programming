data class Grade(
    val later: Char,
    val point: Double,
    val credit: Double,
)

//making a class open makes is inheritable
//person class is superclass or base class
open class Person(var firstName: String, var lastName: String) {
    fun fullName() = "$firstName $lastName"
}

//The class student inherits from the class person using :
//student is a subclass or derived class of person
class Student(
    firstName: String, lastName: String,
    var grades: MutableList<Grade> = mutableListOf<Grade>(),
) : Person(firstName, lastName) {

    open fun recordGrade(grade: Grade) {
        grades.add(grade)
    }
}
//by making a class abstract it can be inherited but cannot be instantiated
abstract class Mammal(val birthDate: String) {
    abstract fun consumeFood()
}
class Human(birthDate: String): Mammal(birthDate) {
    override fun consumeFood() {
// ...
    }
    fun createBirthCertiﬁcate() {
// ...
    }
}
//sealed classes are used to make a particular type remain to a class
sealed class Shape(s: String, a: Double, b: Double, height: Double) {
   // class Circle(val radius: Int): Shape("paralelogaram", a, b, height)
   // class Square(val sideLength: Int): Shape("paralelogaram", a, b, height)
}

fun main() {
    //class objects
    val history = Grade(later = 'A',point = 12.0,credit = 3.0)
    val person = Person(firstName = "john", lastName = "Otieno") //person object
    val student = Student(firstName = "jane", lastName = "Wamboi")  //object of person class

    println(person.fullName())
    println(student.fullName())
    val record=student.recordGrade(history)
    println(record)
}

