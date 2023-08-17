#include <iostream>
#include <stdlib.h>
#include <windows.h>


/*Escribe el programa que imprima la tabla de multiplicar de forma
descendente de un número entero, el cual se le solicitará al usuario. Por
ejemplo, si el usuario digita 5, el algoritmo imprime la tabla de multiplicar del
5:
10 x 5=50
9 x 5=45
8 x 5=40
…..
1 x 5=5*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)

int numero = 5; 
int main(){
    amarillo;
    for(int i = 10; i>=0; i--){
        std::cout << numero << " x " << i << "= " << numero * i << std::endl;
    }

    system("pause");
    return 0;
}
