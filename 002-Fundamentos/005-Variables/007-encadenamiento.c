#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    char nombre[] = "Salvador Hermelo ";
    char apellidos[] = "Olivares Martinez";
    
    strcat(nombre,apellidos);
    printf("Mi nombre completo es: %s",nombre);

    return 0;
}