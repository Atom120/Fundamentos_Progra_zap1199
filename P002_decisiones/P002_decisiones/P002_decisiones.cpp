// P002_decisiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale> //libreria para cambiar idiomas
#include <cstdlib>//Se usa en abs()
#include <cmath> // Necesario para fabs()

int main()
{
    float numero = 0;
    //maneras de configurar para que soporte ñ y acentos
    setlocale(LC_ALL, "en-US");
    int Edad = 0;
    //Sintaxys de Decisiones
    //La palabra reservada es IF
    //Lo que este dentro del parentesis si es verdad
    std::cout << "Hello user give ur age!\n";
    std::cin >> Edad;
    if (Edad >= 18)
    {
        //se ejecuta esto
        std::cout << "U r an adult" << std::endl;
    }

    int vidas = 0;
    bool continuar = false;
    //Decisiones dobles sintaxys
    std::cout << "Do u wanna continue??";
    std::cin >> continuar;
    if (continuar==true)//si esto es verdadero
    {
        //se ejecuta esto
        std::cout << "U choose continue" << std::endl;
        std::cout << "So give me ur money" << std::endl;
    }
    else 
    {
        //si no es verdadero ejecuta esto
        std::cout << "U lose The Death" << std::endl;
        std::cout << "GG" << std::endl;

    }
    //Terminando la ejecución se vendra a esta linea
    //Si es falso ejecuta directo a esta linea
    std::cout << "bye bye baby girl " << std::endl;
    numero = Edad;
    if(numero<0)
    {
        numero = numero * -1;
    }
    std::cout << "This is ur age in absolute number " << numero;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
