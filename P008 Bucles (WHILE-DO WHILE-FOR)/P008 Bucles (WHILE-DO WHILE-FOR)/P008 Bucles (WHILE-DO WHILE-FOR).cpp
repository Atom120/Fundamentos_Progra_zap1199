// P008 Bucles (WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Sebastian selvas garcia

#include <iostream>

int main()
{
    int num;
    do
    {
        std::cout << "Hola ingresa un numero no mayor a 100\n";
        std::cout << "Para salir ingresa un numero superior a 100 " << std::endl;
        std::cin >> num;
    } while (num <= 99);
    std::cout << "acabas de salir del do while " << std::endl;
    num = 0;
    while (num <= 100)
    {
        std::cout << "Estas dentro del while " << std::endl;
        std::cout << "Tu numero es " << num << " Para salir pon un numero mayor a 100 y para no salir, no lo hagas " <<  std::endl;
        std::cin >> num;
        system("pause");
    }
    std::cout << "Lograste salir del bucle " << std::endl;
    system("pause");
    system("cls");

    std::cout << "Hola de nuevo usuario " << std::endl;
    for (int i = 0; i <= 5; i++)
    {
        std::cout << "Dale a enter para comprar una manzana " <<std::endl<<"Ahora tienes " << i << std::endl;
        system("pause");
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
