#include <iostream>

using namespace std;






int main()
{



int sizeArray;

cout <<"Please enter the size of array elements";

cout<<endl;

cin>>sizeArray;


int arrElements[sizeArray];


for(int i = 0; i < sizeArray; i++) {

      cout<<"Enter Element  "<< (i+1) << " - ";

      cin>>arrElements[i];

   }


//Finding the largest element in the array

for(int j = 0; j < sizeArray; j++) {

      if (arrElements[0] < arrElements[j]){

        arrElements[0]= arrElements[j];

      }



   }


cout<< "The largest element in array is: " << arrElements[0] <<endl;


cout<<"To exit please enter zero !" <<endl;



    return 0;
}
