// P003_Mayor_que_menor_que.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>

int main()
{
    float num1 = 0;
    float num2 = 0;

    std::cout << "Hello World!\n";
    std::cout << "Ingresa dos numeros ";
    std::cin >> num1, 
    std::cin >> num2;

    if (num1 > num2) {

        std::cout << "El " << num1 << " es mayor a "<< num2 << " y " << num2 << " es menor ";
    }

    else {
        std::cout << "El " << num1 << " es menor que " << num2 << " y "<<  num2 << " es mayor ";
        
    }
    if(num1==num2){
        std::cout << num1 << " y " << num2 << " son iguales ";
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
