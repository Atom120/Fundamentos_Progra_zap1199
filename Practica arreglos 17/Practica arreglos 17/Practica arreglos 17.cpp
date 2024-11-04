// Practica arreglos 17.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
   int num = 0;

    int edades[3][2] = { {1,2},{9,8},{14,21} };
    int filas = (sizeof(edades) / sizeof(edades[1]));
    std::cout << "edades"<< edades << " edades[0] " << edades[0] << " " << filas << std::endl;
    int columnas = (sizeof(edades[1]) / sizeof(edades[1][1]));
    std::cout << columnas;
*/

#include <iostream>
#include <string>
#include<locale.h>

int main()
{

    std::string nombre[3] = { "r6","fornite","metro" };
    int ano[3] = {2015,2017,2019};
    std::string Autor[3] = { "Andrea Zanini","Tim Sweeney","Dmitry Glukhovsky" };
    std::string Estudio[3] = { "Ubisoft Montreal","Epic","4A Games" };

    std::cout << nombre[0] << std::endl;
    std::cout << ano[0] << std::endl;
    std::cout << Autor[0] << std::endl;
    std::cout << Estudio[0] << std::endl;
    system("pause");

    std::cout << nombre[1] << std::endl;
    std::cout << ano[1] << std::endl;
    std::cout << Autor[1] << std::endl;
    std::cout << Estudio[1] << std::endl;
    system("pause");

    std::cout << nombre[2] << std::endl;
    std::cout << ano[2] << std::endl;
    std::cout << Autor[2] << std::endl;
    std::cout << Estudio[2] << std::endl;
    system("pause");
}
//Año de publicación, Autor, Estudio que lo creo
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
