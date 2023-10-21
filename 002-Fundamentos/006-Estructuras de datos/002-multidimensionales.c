#include <stdio.h>

int main(int argc,char *argv[]){
    
    char* agenda[10][4];
    
    agenda[0][0] = "Salvador Hermelo";
    agenda[0][1] = "Olivares Martínez";
    agenda[0][2] = "225678954";
    agenda[0][3] = "hola@correo.es";
    
    agenda[1][0] = "Juan";
    agenda[1][1] = "Lopez Garcia";
    agenda[1][2] = "789345123";
    agenda[1][3] = "adios@mensaje.com";
    
    printf("El correo del segundo contacto es: %s \n",agenda[1][3]);

    return 0;
}