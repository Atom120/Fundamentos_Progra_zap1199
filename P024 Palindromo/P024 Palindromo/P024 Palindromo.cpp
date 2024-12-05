// P024 Palindromo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Sebastián Selvas

#include <iostream>
#include <string.h>
#include <string>

bool palindromo(char palabra[], int inicio, int final)
{
    if (inicio >= final) return true;// Sirve para el centro de la palabra y cuando es 1
    if (palabra[inicio] == palabra[final])//checa si sus palabras son iguales 
        palindromo(palabra, inicio + 1, final - 1);//se recore al inicio y al fin para ir descartando
    else return false;
}


int main()
{
    char palabra[50];
    int tam;
    bool pal;

    std::cout << "Hello Ingrese una palabra para comprobar si es palindroma\n";
    std::cin.getline(palabra,50);
    tam = strlen(palabra); // strlen determina la longitud de serie excluyendo el carácter nulo final.
    //osea quita el espacio vacio al final

    pal = palindromo(palabra, 0, tam - 1);
    if (pal == true)
    {
        std::cout << "La palabra es palindroma";
    }
    else
    {
        std::cout << "La palabra no es palindroma";
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
