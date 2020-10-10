int main() {
int year = 0;

std::cout << "Enter year: ";
std::cin >> year;
  
if (year < 1000 || year > 9999) {

  std::cout << "Invalid input.\n";

}
else if (year % 4 == 0 && year % 400 == 0 || year % 100 != 0) {

  std::cout << year << " is a leap year.\n";
  
}
else {

  std::cout << year << " is not a leap year.\n";

  }

}