#include <iostream>
#include <stdlib.h>
#include <windows.h>
/*El cuadrante de un punto (x, y) se puede
determinar a partir del signo de x e y.
Escribir un programa en C++ que dadas las
coordenadas x e y, indique, mediante un
mensaje, a qué cuadrante pertenece el
punto. Considere también el análisis del
centro de coordenadas y los ejes.*/
#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida,14)


int main(){
    amarillo;
    float x =-4 ,y = -1;
    if (x > 0 && y >0){
        std::cout << "El punto se ubica en el primer cuadrante" << std::endl;
    }
    else if (x < 0 && y > 0){
        std::cout << "El punto se ubica en el segundo cuadrante. "<< std::endl;
    }
    else if (x<0 && y<0){
        std::cout << "El punto se ubica en el tercer cuadrante. " << std::endl;
    }
    else if (x>0 && y<0){
        std::cout << "El punto se ubica en el cuarto cuadrante. " << std::endl;
    }
    else if (x == 0 && y==0){
        std:: cout << "El punto se ubica en el origen (0,0)" << std::endl;
    }
    else {
        std::cout << "El punto pertenece a un eje" << std::endl;
    }

    system("pause");
    return 0;
}
