//calculating power of a number
#include <bits/stdc++.h>
using namespace std;

int isEven(int num){
    if(num%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int calcPower(int a, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return a;
    }
    if(isEven(n)){
        return calcPower(a*a, n/2);
    }
    else{
        return calcPower(a*a,n/2)*a;
    }
}

int main()
{
    int num_base, num_power,ans;
    cout << "Enter the base Number: ";
    cin >> num_base;
    cout << "Enter the power Number: ";
    cin >> num_power;
    ans = calcPower(num_base, num_power);
    cout << num_base << " raised to the power of " << num_power << " is " << ans << endl;
}