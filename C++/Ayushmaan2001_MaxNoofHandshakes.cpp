#include <iostream>
using namespace std;

void Maximum_Number_of_handshake(int number_of_persons)
{
    int i ,n = -1;
    for(i=0;i<number_of_persons;i++)
    {
        n++;
    }
    cout<<"Maximum number of handshake:\n"<<n;
}
int main()
{
    int persons;
    cout<<"Enter the number of person:\n";
    cin>>persons;
    Maximum_Number_of_handshake(persons);
}
