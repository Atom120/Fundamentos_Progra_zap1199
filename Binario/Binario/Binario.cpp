// Binario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

std::string binario(int decimal)
{
    int binario[16];

    for (int i = 0; i < 16; i++)
    {
        binario[i] = decimal % 2;//operador modulo para saber si los digitos son par o impar
        decimal /= 2;//valor de decimal dividido entre dos para seguir dividiendo la parte entera del valor
    }

    std::cout << "El valor en binario es: ";
    for (int i = 15; i >= 0; i--)
    {
        std::cout << binario[i];
    }
    return " ";
}

int main()
{
    int decimal;

    std::cout << "Ingrese el decimal\n";
    std::cin >> decimal;
  
    binario(decimal);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
