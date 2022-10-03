#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
 int angka[]={3,5,6,8,12};
 cout<< "angka" << angka[4] <<endl;
 
   char huruf[]={'x','y','z'};
   printf ("Huruf %c\n",huruf[1]);
   string nama[]= {"pandu","Tanaka","Panca"};
   cout<< "nama=" <<nama[0]<<endl;

int nilai[3][4]=
  {
    {10, 20,30,40},
    {50, 60,70,80},
    {90, 100}
  };
cout << "nilai" <<nilai[1][3];
}