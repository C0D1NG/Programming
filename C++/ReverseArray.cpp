/*write a program to reverse a array
input: 1 2 3 4 5

output: 5 4 3 2 1

made by Azad Singh

*/
#include <iostream>
using namespace std;


void Reverse(int arr[], int start, int end)
{

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


int main()
{
    int n;
    cout << "Enter the size of the array:  " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array element: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Reverse(arr, 0, n - 1);
    cout << "the reverse array is" << endl;
    for(int j = 0; j<n ; j++){
        cout << arr[j] << " ";
    }
    cout<<endl;
}

