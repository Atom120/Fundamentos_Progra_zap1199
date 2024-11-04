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
#include <ctime>

int main()
{
    srand(static_cast<unsigned>(time(0)));

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
    system("cls");

    int hola = 0;
    int matriz[3][3];




    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j]= rand() % 10 + 1;
        }
    }
    std::cout << matriz[0][0] << " " << matriz[1][0] << " " << matriz[2][0] << std::endl;
    std::cout << matriz[1][0] << " " << matriz[1][1] << " " << matriz[1][2] << std::endl;
    std::cout << matriz[2][0] << " " << matriz[2][1] << " " << matriz[2][2] << std::endl;
    system("pause");
    system("cls");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {//le falta una biblioteca al setw
            std::cout << std::setw(4) << matriz[i][j];
        }
        std::cout << std::endl;
    }

  
}
//Año de publicación, Autor, Estudio que lo creo
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

/*
  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            std::cout << matriz[i][j];
        }
    }
*/
