#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct indexMasaTubuh{
 string keterangan;
 float berat; 
 float tinggi; 
 float hasil; 
 char tanya; 
 float keM ; 
};


string ketentuan(indexMasaTubuh index){
 if(index.hasil < 17){
  index.keterangan = "Kurang Gizi, Anda Sangat Kurus";
  } 
  else if(index.hasil <18.5) {
   index.keterangan = "Kurang Gizi, Anda Kurus";
   } 
   else if(index.hasil <25) {
    index.keterangan = "Gizi Baik, Anda Normal";
   }
   else if(index.hasil <27) {
     index.keterangan = "Gizi Lebih, Anda Gemuk";
    }
    else if(index.hasil >=27) {
    index.keterangan = "Gizi Lebih, Anda Sangat Gemuk (Obesitas)";
    }
 return index.keterangan;
}

/*kalkulasi berat badan ideal*/
float BeratBadanIdeal(indexMasaTubuh index){
 index.keM = (index.tinggi/100); /*konversi dari cm ke M, kemudian di kuadratkan*/
 index.hasil = index.berat/(index.keM*index.keM);
 return index.hasil;
}


/*JUDUL HEADER PROGRAM*/
void header(){
 cout<<"\tKalkulator | Index Masa Tubuh"<<endl;
}


int main(){
 indexMasaTubuh index;
 do{
 header();
 cout<<"Masukan berat Badan   [Kg] : ";
 cin>>index.berat;
 cout<<"Masukan tinggit Badan [cm] : ";
 cin>>index.tinggi;
 index.hasil = BeratBadanIdeal(index);
 cout<<"Index Masa Tubuh Anda      : "<<index.hasil<<endl;
 cout<<"Keterangan : "<<ketentuan(index)<<endl;
 cout<<"Hitung Lagi [Y/N]          : ";cin>>index.tanya;
 system("cls");
 } while(index.tanya=='Y' || index.tanya=='y');
 return 0;
}
