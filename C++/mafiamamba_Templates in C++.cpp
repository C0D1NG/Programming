#include <iostream>
#include <conio.h>
using namespace std;

template<class t1,class t2>
class sample
{
    t1 a;
    t2 b;
    public:
        void getdata()
        {
            cout<<"Enter a and b: ";
            cin>>a>>b;
        }
        void display()
        {
            cout<<"\t\nValues are: "<<endl;
            cout<<"\t\na="<<a<<endl;
            cout<<"\t\nb="<<b<<endl;
        }
};

int main()
{
    sample<int,int> s1;
    sample<char,char> s2;
    sample<float,float> s3;
    cout <<"Two Integer data"<<endl;
    s1.getdata();
    cout <<"Two Character data"<<endl;
    s2.getdata();
    cout <<"Two Float data"<<endl;
    s3.getdata();
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
