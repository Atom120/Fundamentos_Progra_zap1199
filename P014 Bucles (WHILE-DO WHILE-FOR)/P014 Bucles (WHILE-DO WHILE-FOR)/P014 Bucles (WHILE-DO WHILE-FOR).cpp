// P014 Bucles (WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int i = 0;
    int speed;
    std::cout << "Vamos a contar!\n";
    std::cout << "primero vamor a contar hasta 1000\n";

    system("pause");
    std::cin >> i;
    while (i <= 1000)
    {

        std::cout << i << std::endl;
        i++;
        
    }
    system("pause");
    std::cout << "Ingresa un numero menor a 1000 para contar a partir de el\n";
    std::cin >> i;
    do
    {
        std::cout << i << std::endl;
        i++;

    } while (i <= 1000);

    system("pause");

    for (int i = 0; i <= 1000; i++)
    {
        std::cout << std::endl << i << std::endl;
    }
    system("pause");
    std::cout << "ingresa 10" << std::endl;
    std::cin >> i;

    do
    {
        for (int i = 0; i == 1000; i++)
        {
            std::cout << std::endl << i*10 << std::endl;
            system("pause");
        }

    } while (i == 100);
}

/*
Contar desde 1000 a 0 con los 3 ciclos
Contar hasta 100 lento
Contar hasta 10x10
*/