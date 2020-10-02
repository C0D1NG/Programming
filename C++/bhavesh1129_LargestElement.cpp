//Largest Element in the Array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The largest element in the Array is: ";
    cout<<max; 
}
