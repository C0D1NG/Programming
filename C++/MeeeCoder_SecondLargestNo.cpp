#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of Elements = ";
    cin>>n;

    int a[n],i;
    int first = INT_MIN;
    cout<<"Enter the Elements = ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>first)
            first = a[i];

    }

    int second = INT_MIN, j;
    for(i=0;i<n;i++)
    {
        if(a[i]>second && a[i]!= first)
            {
                second=a[i];
                j = i;
            }
    }
    cout<<"The second maximum element is present at "<<j+1<<" position and element = "<<second;
}