#include <iostream>
#include <stdlib.h>
#include <windows.h>

/*Escriba el programa que permita leer n números digitados por el teclado y
determine, cuántos números son positivos, negativos y cuántos son ceros.
*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)

int positivo = 0, negativo = 0, cero= 0;

int cont,numero;
void PedirDatos();
void Loop();
void MostrarDatos();

int main(){

    amarillo;
    PedirDatos();
    Loop();
    MostrarDatos();
    system("pause");
    return 0;
}

void PedirDatos(){
    std::cout << "Dime cuantos numeros deseas escribir en el teclado: "; std::cin >> cont;
}
void Loop(){
    for(int i = 0; i<cont; i++){
        std::cout << i+1 << ". "; std::cin >> numero;
        if (numero > 0){
            positivo++;
        }
        else if (numero < 0){
            negativo++;
        }
        else{
            cero++;
        }
    }
}

void MostrarDatos(){
    std::cout << "Cantidad de numeros positivos: " << positivo << std::endl;
    std::cout << "Cantidad de numeros negativos: " << negativo << std::endl;
    std::cout << "Cantidad de ceros: " << cero << std::endl;
}