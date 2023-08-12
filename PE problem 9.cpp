// Programa para resolver el problema 9 de Project Euler
// Miguel Ángel Martínez Lucero
// 23 de abril de 2020

#include <iostream>
#include <cmath>
using namespace std;

int main(){

//--------------------- Definimos variables -------------------
int k = 1000;
int a, b, c;
int p;
int S = 0, S1 = 0;

cout << "Calculating... \n";


for(int x = 1; x <= k; x++)
    {

    b = (k*k/2 - k*x)/(k-x);
    a = x;
    c = k - a - b;

    S1 = sqrt(a*a + b*b);


    if ( a < b && a*b*c > 0)
    {
        if ( b < c )
        {
            S = a+b+c;
        }
    }



    if(S == k && S1 == c)
    {
        p = a*b*c;
        cout << "a: " << a << "\n";
        cout << "b: " << b << "\n";
        cout << "c: " << c << "\n";
        cout << "suma: " << S << "\n";
        cout << "producto abc: " << p << "\n";
        break;
    }
}

return 0;
}
