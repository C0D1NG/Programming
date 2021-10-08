#include<iostream>
using namespace std;
int main(){
    int first = 0;
    int second = 1;
    int N;
    cin >> N;
    while (N-2 > 0)
    {
        int nexts = first + second;
        cout  << first << " "<< second << " ";
        first = second;
        second =nexts;
        N--;
    }

}
