// P012 Bucles (WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale.h>
#include <string>
#include<cstdlib>

int main()
{
    int con;
    int vidas = 3;

    std::cout << "Hola tienes 3 vidas, Para entrar al bucle presiona 0 y para salir cualquier otro numero entero cuando te pregunten\n";
    std::cin >> con;

    while (con == 0)
    {
                
                for (int i = 3; i >= 0; i--)
                {
                    std::cout << "Dale al enter para perder vidas " << std::endl << "Ahora tienes " << i << std::endl;
                    system("pause");
                }

                std::cout << "Quieres salir?? 0 para continuar y otro numero entero para salir \n";
                std::cin >> con;
    }
    std::cout << "Ahora vamor a contar hasta 100\n";
    for (int i = 0; i <= 100; i++)
    {
        std::cout << std::endl << i << std::endl;
       
    }

}
/*
Ciclo de juego infinito gastar 3 vidas, preguntar al usuario si quiere continuar
Contar hasta 100
*/