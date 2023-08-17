#include <iostream>
#include <stdlib.h>
#include <windows.h>

/*Crea un programa que escriba en pantalla los números pares del 26 al 10
(descendiendo), usando for*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define yellow color(salida,14)

int main(){
    yellow;
   \
    for(int i = 24; i>10; i-=2){
        std::cout<< i << std::endl;
    }
    system("pause");
    return 0;
}