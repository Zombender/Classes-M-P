/*Escribir un programa en C++ que permita calcular el número de pulsaciones
que debe tener una persona por cada 10 segundos de ejercicio aeróbico.

Si la persona es del sexo femenino, la fórmula es:
Número de pulsaciones = (220 – edad) /10 y

Si el sexo es masculino: Número de pulsaciones = (210 – edad) /1
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

#define color SetConsoleTextAttribute
#define salida GetStdHandle(STD_OUTPUT_HANDLE)
#define amarillo color(salida, 14)

int genero, edad;
float pulsacion;
void PedirDatos();
float PulsacionHombre();
float PulsacionMujer();

int main()
{

    PedirDatos();

    if (genero == 1)
    {
        std::cout << "Tu cantidad de pulsaciones por cada 10 segundos de ejercicio aerobico es: " << PulsacionHombre() << std::endl;
    }
    else
    {
        std::cout << "Tu cantidad de pulsaciones por cada 10 segundos de ejercicio aerobico es:" << PulsacionMujer() << std::endl;
    }
    system("pause");
    return 0;
}

void PedirDatos()
{
    std::cout << "¡Hola! para saber tu cantidad de pulsaciones cada 10 segundos de ejercicio aeróbico, necesitamos conocer tu género. Seleccione.";
    std::cout << "\n1. Masculino \n2. Femenino\n";
    std::cin >> genero;
    if (genero == 1)
    {
        std::cout << "Se ha confirmado tu genero. Ahora debes ingresar tu edad: ";
        std::cin >> edad;
    }
    else if (genero == 2)
    {
        std::cout << "Se ha confirmado tu genero. Ahora debes ingresar tu edad: ";
        std::cin >> edad;
    }
    else
    {
        std::cout << "Valor incorrecto.";
        system("pause");
        exit(0);
    }
}

float PulsacionHombre()
{
    pulsacion = (210 - edad) / 10;
    return pulsacion;
}

float PulsacionMujer()
{
    pulsacion = (220 - edad) / 10;
    return pulsacion;
}