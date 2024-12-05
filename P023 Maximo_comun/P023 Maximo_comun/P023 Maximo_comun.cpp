// P023 Maximo_comun.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

// Función recursiva para calcular el MCD de dos números
int mcd(int a, int b) {
    // Caso base: si uno de los números es 0, el MCD es el otro número
    if (b == 0) {
        return a;
    }
    // Llamada recursiva: el MCD de (b, a % b). Donde el residuao se hara b
    return mcd(b, a % b);
}

int main() {
    int num1, num2;

    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    // Calcular y mostrar el MCD
    std::cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << std::endl;

    return 0;
} 
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
