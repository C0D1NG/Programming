// Maximum number of handshakes
#include <iostream>
using namespace std; 

int countHandshakesFast(int n) {
  return (n*(n-1))/2; 
}

int countHanshakesBruteforce(int n) {
  int i=0,j=0;
  int handshakes = 0;

  for(i=0;i<n;i++) {
    for(j=i+1;j<n;j++) {
      ++handshakes; 
    }
  }
  return handshakes; 
}
int main() {

  int n;
  cout<<"Enter the number of persons\n";
  cin>>n;
  int ans1 = countHanshakesBruteforce(n);
  int ans2 = countHandshakesFast(n);
  cout<<"Total Hanshakes"<<endl; 
  cout<<"Bruteforce Answer in O(n*n) : "<<ans1<<endl;
  cout<<"Answer in O(1) : "<<ans2<<endl;
   
  return 0; 
}

/*

Sample :

Enter the number of persons
55
Total Hanshakes
Bruteforce Answer in O(n*n) : 1485
Answer in O(1) : 1485

*/
