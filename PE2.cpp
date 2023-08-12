#include <iostream>

using namespace std;

int main(){
 int fib1=0, fib2=1, c = 0;
 int suma = 0;


  while(c <= 4000000)
  {
  c = fib1 + fib2;

   if(c%2 == 0)
       {
          suma += c;
       }

   fib1 = fib2;
   fib2 = c;
  }

cout << "el valor de la suma es: " << suma;


 return 0;
     }
