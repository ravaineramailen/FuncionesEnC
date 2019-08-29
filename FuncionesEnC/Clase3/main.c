#include <stdio.h>
#include <stdlib.h>

void saludar(); //Funcion viod no retorna nada. PROTOTIPO
int sumar(int, int); //Funcion int tiene retorno. PROTOTIPO

int main(){

    saludar();

    int valor;
    valor = sumar(33 , 77);
    printf("La suma es: %d\n", valor);

    return 0;
}


void saludar(){ // desarrollo de la funcion
    printf("Hola mundo\n");
}

int sumar(int num1, int num2){ // desarrollo de la funcion
    int suma;

    suma = num1 + num2;

    return suma;
}
