#include <iostream>
#include <stdlib.h>
#include <windows.h>

/*Crear un programa que muestre los primeros ocho números pares (pista: en
cada pasada habrá que aumentar de 2 en 2, o bien mostrar el doble del valor
que hace de contador). Usar do..while.*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)

int numero = 0, i= 0;
int main(){
    amarillo;
    do{
    numero += 2;
    std::cout << numero << std::endl;
    i++;
    }while(i < 8);
    system("pause");
    return 0;
}