#include<iostream>
using namespace std;
int main(){
    int A;
    cout<< "Enter number to calculate squareroot:";
    cin>>A;
    double appr = 0.5 * A;
    double error = A - appr*appr;
    while (error > 0.0000001 || error < - 0.000001)
    {
        double better = 0.5 * (appr + A/appr);
        appr = better;
        error = A- better*better;

    }
    cout << appr;
}
