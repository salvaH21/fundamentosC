#include <stdio.h>

int main(int argc,char *argv[]){
    
    int edad = 32;
    
    do{
        printf("Tu edad es menor que 60 años \n");
        edad++;
    }while(edad<60);
    return 0;
}