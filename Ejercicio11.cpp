#include <iostream>
#include <stdlib.h>
#include <windows.h>

/*Escribe el algoritmo imprima los números impares comprendidos entre 10 y
20. Al mismo tiempo calcular el producto.*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)

int main(){
    amarillo;
    int producto = 1;
    for(int i = 10; i<20; i++){
        if(i % 2 != 0){
            std:: cout << i << std::endl;
            producto *= i;
        }
    }
    std::cout << "Producto: " << producto << std::endl;
    system("pause");
    return 0;
}