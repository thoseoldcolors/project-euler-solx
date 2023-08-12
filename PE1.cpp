#include <iostream>

 using namespace std;

 int main(){

 long long int suma = 0;

 for(int i=1; i<1000; i++)
 {
     if(i%3 == 0 || i%5 == 0)
       {
    suma = suma + i;
     cout<< i<< " ";
       }
      else {suma = suma;}
 }


 cout <<"El valor de la suma es: "<< suma;

 return 0;
 }
