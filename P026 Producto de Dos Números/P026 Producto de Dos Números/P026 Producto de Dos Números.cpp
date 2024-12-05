// P026 Producto de Dos Números.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
/*
int producto(int numero1, int numero2)
{
    if (numero2 == 1)
    {
        return numero1;
    }

    else
    {
        numero1 = numero1 + producto(numero1, numero2 - 1);

        return numero1;
    }
}*/

int productoPelon(int numero1, int numero2)
{
    if (numero2 == 0) {
        return 0;
        return numero1;
        std::cout << productoPelon(numero1, numero2);
    }
    else
    {
        numero2 = numero1 + productoPelon(numero1, numero2 - 1);
            return numero2;
    }
}

int main()
{
    int numero1;
    int numero2;
    std::cout << "Ingresa un numero\n";
    std::cin >> numero1;
    std::cout << "Ingresa con el cual lo quieres multiplicar\n";
    std::cin >> numero2;
    std::cout << std::endl;
    std::cout << "Resultado " << std::endl;
    std::cout << productoPelon(numero1, numero2);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
