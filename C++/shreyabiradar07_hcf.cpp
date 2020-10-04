// C++ program to find HCF of two numbers
#include <iostream>
using namespace std;
// Recursive function to return hcf of n1 and n2
int hcf(int n1, int n2)
{
 if (n1 == 0)
  return n2;
 if (n2 == 0)
  return n1;

 if (n1 == n2)
  return n1;

 if (n1 > n2)
  return hcf(n1 - n2, n2);
 return hcf(n1, n2 - n1);
}

int main()
{
 int n1, n2;
 cin >> n1 >> n2;
 cout << "HCF of " << n1 << " and " << n2 << " is " << hcf(n1, n2);
 return 0;
}