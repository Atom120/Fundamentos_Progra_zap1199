// P013 Bucles (WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::string us;
    std::string ato;
    std::string usuario = "atom";
    std::cout << "Hola ingresa tu usuario!\n";
    std::cin >> ato;
    std::cout << "Escribe cualquier palabra" << std::endl;
    std::cin >> us;
    do
    {
        if (ato == usuario)
        {
            std::cout << "Por favor vuelve a ingresar el ususario \n";
            std::cin >> ato;
            system("pause");
            system("cls");
        }
        else
        {
            std::cout << "Por favor ingresa el usario corecto\n";
            std::cin >> ato;
            system("pause");
            system("cls");
        }
    } while (ato != us);

}

/*
El login en un videojuego se repite si el usuario no ingresó los datos correctos.
Si ingreso los datos correctos volver a pedir los datos.
*/