#include <iostream>
#include <stdlib.h>
#include <windows.h>

/*Escribir un programa en C++ que teniendo como dato de entrada un número
entero, determine si el número es par o impar.*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)

int main(){
    amarillo;
    int numero = 1;
    if(numero % 2 == 0){
        std::cout << "Es un numero par" << std::endl;
    }
    else{
        std::cout << "Es un numero impar"<< std::endl;
    }
    system("pause");
    return 0;
}