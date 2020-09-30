#include <iostream>
using namespace std;

int main()
{
    long long int num, sum = 1;
    cin >> num;
    for (int i = 2; i*i<= num; i++)
        if (num % i == 0)
        {
            if(num%i==i)
            sum = sum + i;
           
            else
            {
               sum=sum+n/i+i;
            }
        }
    if (num == sum)
    {
        cout << num << " is a perfect number." << endl;
    }
    else
        cout << num << " is not a perfect number." << endl;
    return 0;
}
