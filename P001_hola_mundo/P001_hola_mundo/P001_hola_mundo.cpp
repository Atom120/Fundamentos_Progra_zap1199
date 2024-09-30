// P001_hola_mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <time.h>
#include <locale>//libreria para cambiar idiomas
#include <codecvt>//Libreria para cambiar codigos de UTF
#include <locale.h>//head file que solo sirve en windows

int main()
{
    //maneras de configurar para soporte ñ y acentos
    std::locale::global(std::locale("en_US.UTF-8"));
    setlocale(LC_ALL, "en-Us");
    setlocale(LC_ALL, "en_MX.UTF-8");
    std::cout << "Hello World!\n";
    //\n es un salto de linea
    //std::endl;
    //iniciaremos las variables de diferencia de tipos
    int Edad = 0;
    int real = 0;
    //int para guardar numeros enteros reales
    float Altura = 0;
    float Cali = 0, resultado = 0;
    // float guarda numeros con decimales
    bool Mx = false;
        //Para guardar Verdadero o Falso
        double exponencial = 0;
        double n1 = 0;
        double n2 = 0;
    //Para numeros muy largos
    char Sexo = ' ';
    //para letras
    char Pais[15] = " ";//valor n no modificable
std::string name = " ";
    //para guardar cadena de caracteres,muchas letras

//Hablar con el usuario y solicitar info
std::cout << "Cuentame!! cúantos años tienes?";
//para descubrir datos del ususario necesitamos utilizar el protocolo de entrada de datos 
//std::CIN >> variables donde se gurdaran los datos 
std::cin >> Edad;
std::cout << "Entonces tienes: " << Edad << " años, Super! bienvenido"<<std::endl;
std::cout << "Entonces"<<std::endl;
std::cout << "Porfavos ingresa los siguientes datos" <<std::endl;;
std::cout << "Tu altura" << std::endl;
std::cin >> Altura;
std::cout << "Pon un numero con más de 6 digitos" << std::endl;
std::cin >> exponencial;
std::cout << "Qué genero eres?? M o F" << std::endl;
std::cin >> Sexo;
std::cout << "Como te llamas??" << std::endl;
std::cin >> name;
std::cout << "Estos son los resultados, tu altura es " << Altura << ", eres " << Sexo << " y te llamas " << name << ".También aquí esta tu numero " << exponencial << " y tu sexo es " << Sexo << "." << std::endl;;
std::cout << "México es el mejor país??" << std::endl;
std::cin >> Mx;
std::cout << "Si lo es:" << Mx << std::endl;
std::cout << "Cuentame cual es tu país favorito " << std::endl;
std::cin >> Pais;
std::cout << "Excelente " << Pais << " es un lugar increible." << std::endl;
std::cout << "Porfa ingresa dos numeros, se realizaran operaciones con estas." << std::endl;
std::cout << "Numero uno" << std::endl;
std::cin >> n1;
std::cout << "Numero dos" << std::endl;
std::cin >> n2;
std::cout << "Suma " << n1 + n2 << std::endl;
std::cout << "Resta " << n1 - n2 << std::endl;
std::cout << "Multi " << n1 * n2 << std::endl;
std::cout << "división " << n1 / n2 << std::endl;
std::cout << "Potencia " << std::pow(n1, n2) << std::endl;
std::cout << "Raiz " << std::pow(n1,1 / n2) << std::endl;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
