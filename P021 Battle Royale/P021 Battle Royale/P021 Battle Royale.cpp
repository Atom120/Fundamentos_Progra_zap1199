// P021 Battle Royale.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int vida(int vida1)
{
  vida1 = rand() % 50;
  return vida1;
}

int defensa(int defensa1)
{
    defensa1 = rand() % 50;
    return defensa1;
}
int velocidad(int vel1)
{
    vel1 = rand() % 50;
    return vel1;
}
int fuerza(int fuer)
{
    if (fuer<=0)
    fuer = rand() % 50;
    return fuer;
}

int main()
{
    int vida1;
    int defensa1;
    int vel1;
    int fuer;

    std::cin >> fuer;
    std::cout << fuerza(fuer);

    std::cout << "El campeon es: \n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
