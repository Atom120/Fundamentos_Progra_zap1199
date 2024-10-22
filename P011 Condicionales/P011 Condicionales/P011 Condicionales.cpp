// P011 Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*Sebastián selvas garcía
Adivina quien
Realizar 5 preguntas para adivinar “tema libre”

Ejemplos:

Deportes
Videojuegos
Películas
*/

#include <iostream>
#include <string>

int main()
{
    bool balon;
    bool water;
    bool pelea;
    bool pensar;
    bool animales;
    std::string deporte;
    std::cout << "Hola adivina el deporte\n";

    std::cout << "Tu deporte usa un balon?\n";
    std::cin >> balon;

    std::cout << "Se practica en el agua?\n";
    std::cin >> water;

    std::cout << "Es un arte marcial\n";
    std::cin >> pelea;

    std::cout << "Se tiene que hacer actividad fisica\n";
    std::cin >> pensar;

    std::cout << "Se utilizan animales\n";
    std::cin >> animales;
 
        if (balon != true)
        {
            if (water!=)
            {
                std::cout << "Este es tu deporte\n";
            }
        }
}

