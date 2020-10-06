#include <iostream>
using namespace std;

void Sum_of_first_N_Natural_Number(int range)
{
    float sum;
    sum = (range*(range+1))/2;
    cout<<"Sum of first "<< range <<" natural number is:\n" << sum;
}

int main()
{
    int n;
    cout<<"Enter the range:\n";
    cin>>n;
    Sum_of_first_N_Natural_Number(n);
}
