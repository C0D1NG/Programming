#include<iostream>
using namespace std;
int main (){
    int N;
    cin >> N;
    int first = 0;
    int second = 1;
    cout << first << " "<< second<< " ";
    for (int i = 0; i < N-2; i++)
    {
        int next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
}
