#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

 int a,b,c,d,e;
 cout<< "PROGRAM MENCARI BILANGAN TERKECIL " << endl;
 cout << "=================================";
 cout << endl;
 cout << "Masukan bilangan pertama : ";
cin >> a;
   cout << "Masukan bilangan kedua : ";
cin >> b;
   cout << "Masukan bilangan ketiga   : ";
cin >> c;
   cout << "Masukkan bilangan keempat  :";
cin >> d;
   cout << "Masukkan bilangan kelima   :";
cin >> e;
   cout<<endl;
 

 if(a<b){
   cout << a << "adalah bilangan terkecil";
   cout << endl; 
 }else if(b<c){
   cout << b << "adalah bilangan terkecil";
   cout << endl; 
 }else if(c<d){
   cout << c << "adalah bilangan terkecil";
   cout << endl;
 }else if(d<e){
   cout << d << "adalah bilangan terkecil";
   cout<< endl ;  
 }else{
    cout << e << "adalah bilangan terkecil";
    cout << endl;
 }
 

 
 return 0;
}
