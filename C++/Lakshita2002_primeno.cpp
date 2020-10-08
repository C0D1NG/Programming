#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i=2;

    for(; i<n; i++){

        int rem = n%i;

        if(rem == 0){
            cout << "not prime" << endl;
            break;
        }else{
            continue;
        }

    }

    if(i==n){
        cout << "is prime" << endl;
    }

    return 0;
}
