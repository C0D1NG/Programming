#include<iostream>
using namespace std;
int main ()
{  
    int i, n, sum=0;  
    char ch = 'y';

    do{
    cout << "\nEnter the number = "; // to check for Perfect Number
    cin >> n;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n)	// Sum of divisors (except number) == number
        cout << "\n" << n <<" is a Perfect Number.";
    else
        cout << "\n" << n <<" is NOT a Perfect Number.";

    cout<<"\n\nDo you want to continue (Y/N) = ";
    cin>>ch; 

    }while(ch=='y'||ch=='Y');
    return 0;
}