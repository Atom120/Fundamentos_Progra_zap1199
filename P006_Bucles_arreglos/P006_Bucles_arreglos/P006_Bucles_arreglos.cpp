// P006_Bucles_arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    //Declarar arreglo de 3 elementos del tipo bool
    bool sintomas[3];
    int sumador = 0;
    //obtener sintomas
        for (int i = 0; i <=3; i++)
        {
            std::cout << "Te sientes mal??\n";
            std::cin >> sintomas[i];
            if (sintomas[i])
            {
                sumador++;
            }
            if (sumador == 1)
            {
                std::cout << "hola 3";
            }
            if (sumador == 2)
            {
                std::cout << "hola 2";
            }
            if (sumador == 3)
            {
                std::cout << "hola 1";
            }
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
