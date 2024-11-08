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
#include <iomanip>

int main()
{
    std::string nombre[3];
    int anios[3];
    std::string Autor[3];
    std::string Estudio[3];

    srand(static_cast<unsigned>(time(0)));
    std::cout << "Hola ususario ingresa nombre, anios, autor y estudio de tres juegos" << std::endl;
    std::cout << "Ingresa todos los datos en orden respectivamente " << std::endl;
    std::cout << "Ingresa los nombres" << std::endl;
    std::cin >> nombre[0] >> nombre[1] >> nombre[2];
    std::cout << "Ingresa los años" << std::endl;
    std::cin >> anios[0] >> anios[1] >> anios[2];
    std::cout << "Ingresa los autores" << std::endl;
    std::cin >> Autor[0] >> Autor[1] >> Autor[2];
    std::cout << "Ingresa los estudios" << std::endl;
    std::cin >> Estudio[0] >> Estudio[1] >> Estudio[2];

    std::cout << nombre[0] << std::endl;
    std::cout << anios[0] << std::endl;
    std::cout << Autor[0] << std::endl;
    std::cout << Estudio[0] << std::endl;
    system("pause");

    std::cout << nombre[1] << std::endl;
    std::cout << anios[1] << std::endl;
    std::cout << Autor[1] << std::endl;
    std::cout << Estudio[1] << std::endl;
    system("pause");

    std::cout << nombre[2] << std::endl;
    std::cout << anios[2] << std::endl;
    std::cout << Autor[2] << std::endl;
    std::cout << Estudio[2] << std::endl;
    system("pause");
    system("cls");

    int opcion;

    std::cout << "Hola usuario que matriz deseas ver??" << std::endl;
    std::cout << "1.Matriz [3][3] 2.Matriz [5][5] 3.Matriz [10][10]" << std::endl;
    std::cin >> opcion;
    int matriz[3][3];

    switch (opcion)
    {
    case 1:
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matriz[i][j] = rand() % 10 + 1;
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
                std::cout << std::setw(10) << matriz[i][j];
            }
            std::cout << std::endl;
        }

        break;

    case 2:
        int matriz2[5][5];

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                matriz2[i][j] = rand() % 10 + 1;
            }
            std::cout << std::endl;
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {//le falta una biblioteca al setw
                std::cout << std::setw(10) << matriz2[i][j];
            }
            std::cout << std::endl;
        }
        break;

    case 3:
        int matriz3[10][10];

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                matriz3[i][j] = rand() % 10 + 1;
            }
            std::cout << std::endl;
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {//le falta una biblioteca al setw
                std::cout << std::setw(10) << matriz3[i][j];
            }
            std::cout << std::endl;
        }
        break;
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
