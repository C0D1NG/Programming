#include <iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter your decimal number : ";
    cin >> n;
    cout<<endl;
    int binary[n];

    int i = 0;
    cout<< "Decimal to Binary From "<< n <<" = "; 
    while (n > 0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for(int j = i -1; j >= 0; j--){
        cout<<binary[j];
    }

    return 0;
}