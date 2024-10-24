// P013 Bucles (WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::string ato;
    std::string ususario = "atom";
    std::cout << "Hola ingresa tu usuario!\n";
    std::cin >> ato;
    do
    {
        if (ato == ususario)
        {
            std::cout << "Por favor vuelve a ingresar el ususario \n";
            std::cin >> ato;
   
        }
        else
        {
            std::cout << "Por favor ingresa el ususario coreccto\n";
            std::cin >> ato;

        }
    } while (ato != ususario);
}

/*
El login en un videojuego se repite si el usuario no ingresó los datos correctos.
Si ingreso los datos correctos volver a pedir los datos.
*/