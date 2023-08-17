#include <iostream>
#include <stdlib.h>
#include <windows.h>

/*Dado un número natural n se desea calcular el promedio de los números
desde 1 hasta n. Realiza el programa que resuelva este planteamiento.*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)

float Promedio(int&);
int main(){
    amarillo;
    int numero = 10;

    std::cout << Promedio(numero) << std::endl;
    system("pause");
    return 0;
}

float Promedio (int& num){
    float promedio, i;
    if(num <=0){
        std::cout << "Solo se admiten numeros naturales.";
        exit(0);
    }
    for (i = 1; i<num; i++){
        promedio+= i;
    }
    promedio /= i;
    return promedio;
}