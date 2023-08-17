#include <iostream>
#include <stdlib.h>
#include <windows.h>

/*Crear un programa que pida números positivos al usuario, y vaya calculando
la suma de todos ellos (terminará cuando se teclea un número negativo o
cero). Usar while.*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)
int suma = 0, i = 2, numero;
void PedirDatos();
int main(){

    amarillo;
    PedirDatos();
    std::cout << "El sistema se ha detenido. La suma de todos los numeros es: " << suma << std::endl;
    system("pause");
    return 0;
}

void PedirDatos(){
    std::cout << "Escribe numeros positivos. Si escribes un numero negativo o cero, el proceso terminara y tendras la suma de todos los numeros validos" << std::endl;
    std::cout << "1. ";
    std::cin >> numero;
    while(numero > 0){
        suma += numero;
        std::cout << i << ". "; std::cin >> numero;
        i++;
    }
}