// P014 Bucles (WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <thread>
#include <chrono>


int main()
{
    
    int i = 0;
    int speed , x=0;
    /*
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
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    */
    system("pause");
    int a = 0;
    for (size_t j = 0; j < 10; j++)
    {
        for (size_t x = 0; x < 10; x++)
        {
            std::cout << a << " ";
            a++;
        }
        /*
        
        std::cout << std::endl;
        for (size_t x = 10; x < 20; x++)
        {
            std::cout << x << " ";

        }
        std::cout << std::endl;
        for (size_t x = 30; x < 40; x++)
        {
            std::cout << x << " ";

        }
        std::cout << std::endl;
        for (size_t x = 40; x < 50; x++)
        {
            std::cout << x << " ";

        }
        std::cout << std::endl;
        for (size_t x = 50; x < 60; x++)
        {
            std::cout << x << " ";

        }
        std::cout << std::endl;
        for (size_t x = 60; x < 70; x++)
        {
            std::cout << x << " ";

        }
        std::cout << std::endl;
        for (size_t x = 70; x < 80; x++)
        {
            std::cout << x << " ";

        }
        std::cout << std::endl;
        for (size_t x = 80; x < 90; x++)
        {
            std::cout << x << " ";

        }
        std::cout << std::endl;
        for (size_t x = 90; x < 100; x++)
        {
            std::cout << x << " ";

        }
         */
        std::cout << std::endl;
    }
}

/*
Contar desde 1000 a 0 con los 3 ciclos
Contar hasta 100 lento
Contar hasta 10x10
*/

/*

for (size_t i = 0; i < 10; i++)
{
    for (size_t j = 0; j < 10; i++)
    {
        j
    }
    n
}
*/