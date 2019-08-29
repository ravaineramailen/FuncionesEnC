#include <stdio.h>
#include <stdlib.h>

void calcular(float, float, int);
float Sumar (float, float);
float Restar (float, float);
float Multiplicar (float, float);
float Dividir (float, float);
void mostrarResultado(float);


int main(){

    printf("Ingrese la operacion que desea ralizar:\n1-Sumar\n2-Restar\n3-Multiplicar\n4-Dividir\n");
    int operacion = pedirDato();
    printf("Ingrese el primer numero: ");
    int num1 = pedirDato();
    printf("Ingrese el segundo numero: ");
    int num2 = pedirDato();

    return 0;
}


void calcular(float num1, float num2, int operacion){

    float resultado;

    switch(operacion){
    case 1:
        resultado = Sumar(num1,num2);
        break;
    case 2:
        resultado = Restar(num1,num2);
        break;
    case 3:
        resultado = Multiplicar(num1,num2);
        break;
    case 4:
        resultado = Dividir(num1,num2);
        break;
    }
}

float Sumar (float num1, float num2){
    int suma;

    suma = num1 + num2;
    return suma;
}

float Restar(float num1, float num2){
    int resta;

    resta = num1 - num2;
    return resta;
}

float Multiplicar(float num1, float num2){
    int multiplicacion;

    multiplicacion = num1 * num2;
    return multiplicacion;
}

float Dividir(float num1, float num2){
    int division;

    division = num1/num2;
    return division;
}

void mostrarResultado(float resultado){

    printf("%.1f\n", resultado);
}
