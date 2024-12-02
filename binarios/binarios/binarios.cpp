// binarios.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <string>
#include <algorithm>

// Función para sumar dos números binarios
std::string sumaBinarios(std::string a, std::string b) {
    int n1 = a.length();
    int n2 = b.length();

    if (n1 < n2) {
        std::swap(a, b);
        std::swap(n1, n2);
    }
    b.insert(0, n1 - n2, '0');

    std::string resultado = "";
    int acarreo = 0;

    for (int i = n1 - 1; i >= 0; i--) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';

        int suma = bitA + bitB + acarreo;
        resultado += (suma % 2) + '0';  // Añadir el bit de la suma
        acarreo = suma / 2;  // Calcular el acarreo
    }

    if (acarreo) 
    {
        resultado += '1';
    }

    std::reverse(resultado.begin(), resultado.end());  // Invertir el resultado
    return resultado;
}

// Función para restar dos números binarios
std::string restaBinarios(std::string a, std::string b) {
    int n1 = a.length();
    int n2 = b.length();

    if (n1 < n2) {
        std::swap(a, b);
        std::swap(n1, n2);
    }
    b.insert(0, n1 - n2, '0');

    std::string resultado = "";
    int acarreo = 0;

    for (int i = n1 - 1; i >= 0; i--) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';

        int resta = bitA - bitB - acarreo;

        if (resta < 0) {
            resta += 2;
            acarreo = 1;
        }
        else {
            acarreo = 0;
        }

        resultado += (resta + '0');
    }

    std::reverse(resultado.begin(), resultado.end());
    resultado.erase(0, std::min(resultado.find_first_not_of('0'), resultado.size() - 1));

    return resultado.empty() ? "0" : resultado;
}

// Función para multiplicar dos números binarios
std::string multiplicacionBinarios(std::string a, std::string b) 
{
    int n1 = a.length();
    int n2 = b.length();
    std::string resultado = "0";

    for (int i = n2 - 1; i >= 0; i--) 
    {
        if (b[i] == '1') 
        {
            std::string temp = a;
            for (int j = 0; j < n2 - 1 - i; j++) {
                temp += '0';  // Agregar ceros a la derecha
            }
            resultado = sumaBinarios(resultado, temp);  // Sumar al resultado
        }
    }

    return resultado;
}

// Función para dividir dos números binarios
std::string divisionBinarios(std::string a, std::string b) {
    if (b == "0") {
        return "Error: División por cero";  // Error en caso de división por cero
    }

    std::string cociente = "";
    std::string residuo = "";

    for (char bit : a) {
        residuo += bit;

        if (residuo.length() < b.length() || residuo < b) {
            cociente += '0';
        }
        else {
            cociente += '1';
            residuo = restaBinarios(residuo, b);
        }
    }

    cociente.erase(0, std::min(cociente.find_first_not_of('0'), cociente.size() - 1));

    if (cociente.empty()) {
        cociente = "0";
    }

    return cociente;
}

// Función para obtener el complemento a 1 de un número binario
std::string complementoA1(std::string binario) {
    for (int i = 0; i < binario.length(); i++) {
        binario[i] = (binario[i] == '0') ? '1' : '0';  // Invertir los bits
    }
    return binario;
}

// Función para obtener el complemento a 2 de un número binario
std::string complementoA2(std::string binario) {
    // Obtener el complemento a 1 primero
    std::string complemento1 = complementoA1(binario);

    // Sumar 1 al complemento a 1
    return sumaBinarios(complemento1, "1");
}

int main() {
    std::string binario1, binario2;

    std::cout << "Introduce el primer número binario: ";
    std::cin >> binario1;

    std::cout << "Introduce el segundo número binario: ";
    std::cin >> binario2;

    // Suma
    std::string suma = sumaBinarios(binario1, binario2);
    std::cout << "La suma es: " << suma << std::endl;

    // Resta
    std::string resta = restaBinarios(binario1, binario2);
    std::cout << "La resta es: " << resta << std::endl;

    // Multiplicación
    std::string multiplicacion = multiplicacionBinarios(binario1, binario2);
    std::cout << "La multiplicación es: " << multiplicacion << std::endl;

    // División
    std::string division = divisionBinarios(binario1, binario2);
    std::cout << "La división es: " << division << std::endl;

    // Complemento a 1 de binario1
    std::string complemento1 = complementoA1(binario1);
    std::cout << "El complemento a 1 de " << binario1 << " es: " << complemento1 << std::endl;

    // Complemento a 2 de binario1
    std::string complemento2 = complementoA2(binario1);
    std::cout << "El complemento a 2 de " << binario1 << " es: " << complemento2 << std::endl;

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
