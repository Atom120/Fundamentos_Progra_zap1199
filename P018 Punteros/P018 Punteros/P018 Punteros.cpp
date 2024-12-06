// P018 Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Sebastián Selvas Gracía

#include <iostream>
#include <iomanip>
#include <stdlib.h>

int main()
{
    int tamanio1;
    int tamanio2;
    int numfila = 0;

    std::cout << "Hola ususario de que tamañio quieres la matriz??\n";
    std::cout << "Cuantas filas quieres??\n";
    std::cin >> tamanio1;
    std::cout << "Cuantas columnas quieres??\n";
    std::cin >> tamanio2;

    //No tenemos que tener cautiva la memoria
    //std::string titulos[100];
    //Crear variables con el tamaño que deseamos
    int** matriz = new int* [tamanio1];
    for (int i = 0; i < tamanio1; i++) {
        matriz[i] = new int[tamanio2];
    }


    if (tamanio1 < 3 || tamanio2 < 3)
    {
        std::cout << "Introduce los valores de la matriz (filas x columnas): " << std::endl;
        for (int i = 0; i < tamanio1; i++) {
            for (int j = 0; j < tamanio2; j++) {
                std::cout << "Introduce el valor de la fila " << i << " y la columna " << j << std::endl;
                std::cin >> matriz[i][j];
            }
        }
    }
    else
    {
        for (int i = 0; i < tamanio1; i++) {
            for (int j = 0; j < tamanio2; j++) {
                matriz[i][j] = rand() % 10;
            }
        }

    }
    system("pause");
    system("cls");


        for (int i = 0; i < tamanio1; i++)
        {
            for (int j = 0; j < tamanio2; j++)
            {//El setw sirve para dar espacios
                std::cout << std::setw(4) << "| " << matriz[i][j] << "|";
            }
            std::cout << std::endl;
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
