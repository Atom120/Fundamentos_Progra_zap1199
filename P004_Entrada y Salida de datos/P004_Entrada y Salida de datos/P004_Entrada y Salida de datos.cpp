// P004_Entrada y Salida de datos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>
/*Realizar un consultorio médico el cual solicite

3 bool

2 string

1 char

2 int

1 float

Al final te entrega tu IMC.
*/



int main()
{
    bool enfermo, vivo, papas;
    char sexo;
    int edad, nacimiento;
    float peso, altura;
    std::string nom, ciudad;
    setlocale(LC_ALL, "en-US");

    std::cout << "Hola, para empezar la consulta primero te haremos unas preguntas\n";
    std::cout << "Dime tu nombre y de donde eres" << std::endl;
    getline(std::cin, nom);
    getline(std::cin, ciudad);
    std::cout << "cual es tu edad y fecha de nacimiento" << std::endl;
    std::cin >> edad;
    std::cin >> nacimiento;
    std::cout << "Estas vivo??" << std::endl;
    std::cin >> vivo;
    std::cout << "Que bueno me alegro" << std::endl;
    std::cout << "Estas enfermo??" << std::endl;
    std::cin >> enfermo;
    std::cout << "Tienes papas" << std::endl;
    std::cin >> papas;
    std::cout << "Okay, okay, ahora dime que genero eres" << std::endl;
    std::cin >> sexo;
    std::cout << "Por ultimo cuanto mides y cuanto pesas??" << std::endl;;
    std::cin >> altura;
    std::cin >> peso;
    std::cout << "Este es tu IMC" << std::endl;
    std::cout << peso / (altura * altura) << std::endl;
    std::cout << "Tabla de IMC:" << std::endl;
    std::cout << "Menos de 18.5: Bajo peso" << std::endl;
    std::cout << "18.5 - 24.9 : Peso normal" << std::endl;
    std::cout << "25 - 29.9 : Sobrepeso" << std::endl;
    std::cout << "30 o más : Obesidad" << std::endl;
}
