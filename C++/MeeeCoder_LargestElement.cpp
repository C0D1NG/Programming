#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of Elements = ";
    cin>>n;

    int a[n],i;
    cout<<"Enter the Elements = ";
    for(i=0;i<n;i++)cin>>a[i];

    int m = INT_MIN,j;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
            {
                m=a[i];
                j = i;
            }
    }
    cout<<"The maximum element is present at "<<j+1<<" position and element = "<<m;
}