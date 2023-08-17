#include <iostream>
#include <stdlib.h>
#include <windows.h>

#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)

/*El nivel de avance de un alumno dentro de una universidad se determina,
según el número de créditos cumplidos hasta la fecha (ver tabla). Escribe el
programa que determine el 
*/
int creditos;
void PedirDatos();
void CalcularAño();
int main(){
    amarillo;

    PedirDatos();
    CalcularAño();
    system("pause");
    return 0;
}

void PedirDatos(){
    std::cout << "Escribir su cantidad de creditos: "; std::cin>> creditos;
}

void CalcularAño(){
    if (creditos <=32 ){
        std::cout << "Estas en el primer año academico";
    }
    else if(creditos > 32 && creditos <=63 ){
        std::cout << "Estas en el segundo año academico";
    }
    else if (creditos > 63 && creditos <= 95){
        std::cout << "Estas en el tercer año academico";
    }
    else if (creditos >=96){
        std::cout << "Estas en el cuarto año academico";
    }
}