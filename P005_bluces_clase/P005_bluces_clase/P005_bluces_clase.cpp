// P005_bluces_clase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale.h>
#include <string>
#include<cstdlib>

int main()
{
    std::string nombre;
    bool continuar = true;
    int vidas = 3;
    setlocale(LC_ALL, "en_MX.UTF-8");
    system("Color fa");
    //vamos a pedirle el nombre al ususario
    std::cout << "Hola usuario biemvenido dame tu nombre" << std::endl;
    std::cin >> nombre;//no puede tener espacios
    std::cout << "Tu nombre es " << nombre << std::endl;
    std::cin.ignore();//sirve para limpiar el buffer
    getline(std::cin, nombre);//puede tener espacios
    system("pause");
    system("cls");
    std::cout << "Tu nombre es " << nombre << std::endl;

    while(continuar)
    {
        std::cout << "Te quedan " << vidas << " vidas" << std::endl;
        vidas--;
        system("pause");
        system("cls");
        if (vidas == 0);
        {
            std::cout << "Deseas continuar? \n0)NO 1)Si\n";
            std::cin >> continuar;
            system("pause");
            system("cls");
            if (continuar == 1)
                {
                    vidas = 3;
                    std::cout << "Vuelve a intentar \n";
                    system("puse");
                    system("cls");
                }
                else
                {
                    std::cout << "GG, bye \n";
                    system("pause");
                    system("cls");
                }
        }
        system("cls");
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
