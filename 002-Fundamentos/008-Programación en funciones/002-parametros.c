#include <stdio.h>

int sumar(int numero1, int numero2){
    int operador1 = numero1;
    int operador2 = numero2;
    int suma = operador1 + operador2;
    return suma;
}

int main(int argc,char *argv[]){
    
    printf("La suma es: %i \n",sumar(4,3));
    printf("La suma es: %i \n",sumar(2,3));
    printf("La suma es: %i \n",sumar(1,4));
    return 0;
}

