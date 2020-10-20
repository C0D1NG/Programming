// CPP Program to check whether number is odd or even
CODE::
   #include <iostream>
  using namespace std;
  typedef long long int ll;


  int main()
  {
     ios_base::sync_with_stdio(false);
	   cin.tie(NULL);
	   cout.tie(NULL);
	   ll n;
     cout<<"Enter number="<<endl;
     cin>>n;
     if(n%2==0)
     {
         cout<<"Number is even"<<endl;
     }
     else
     {
         cout<<"Number is odd"<<endl;
     }
    
return 0;
} 
