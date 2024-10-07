// P006 Repaso Entrada y Salida de datos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale>
#include<string>

int main()
{


    int main()
    {//Decisiones anidadas
        setlocale(LC_ALL, "en-US");
        std::string apodo = "Mcbr0";
        std::string apodo_usuario;
        std::string contra = "hola123";
        std::string contra_usuario;
        std::cout << "hola ususario dame tu nick name" << std::endl;
        std::getline(std::cin, apodo_usuario);//con getline podemos ingresar espacios sin problemas en variables tipo string
        if (apodo == apodo_usuario) {
            std::cout << "para confirmar tu acceso ingresa tu contraseña: " << std::endl;
            std::getline(std::cin, contra_usuario);
            if (contra == contra_usuario) {
                std::cout << "Bienvenido" << apodo << std::endl;
            }
            else {
                std::cout << "saquese impostor" << std::endl;
            }
        }
        else
        {
            std::cout << "No conozco a ese usuario" << std::endl;
        }
}
