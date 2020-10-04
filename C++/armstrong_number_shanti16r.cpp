#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n, og_n, rem;
int num = 0, result = 0, power;

cin>>n;
og_n = n;

while(og_n!=0){
og_n/= 10;
++num;
}
og_n = n;
while(og_n!=0){
rem = og_n % 10;
power = round(pow(rem, num));
result += power;
og_n /= 10;
}

if(result == n)
cout<< n << " is an Armstrong number. ";
else
cout<< n << " is not an Armstrong number.";
return 0;
}
