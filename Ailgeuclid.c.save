/*Programa que utiliza el algoritmo de Euclides para encontrar el MDC*/

#include <stdio.h>

int mayor(int num1, int num2){
    int mayor;
           if(num1 > num2)
              mayor = num1;
           else
              mayor = num2;
    return(mayor);
           }
int MCD( int max, int min){
    int r = 1;
    int mcd;
    while(r != 0)
    {
      r = max%min;
      max = min ;
      min = r;
    }
  mcd = max;

return(mcd);
         }

int main(){

    int num1, num2, mcd;
    int max, min;

    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Introduce el segundo número. ");
    scanf("%d", &num2);


    if(num1 == 0 && num2!= 0)
        printf("El mcd es: %d \n", num2);
    else if(num2 == 0 && num1 != 0)
        printf("El mcd es: %d \n", num1);

    if(num1 == 0 && num2 == 0)
        printf("Pa que quieres saber eso jaja saludos!");

    max = mayor(num1, num2);

    if (max == num1)
       min = num2;
    else
       min = num1;

    mcd = MCD(max, min);

    printf("El máximo común divisor es: %d \n", mcd);
    return 0;
}
