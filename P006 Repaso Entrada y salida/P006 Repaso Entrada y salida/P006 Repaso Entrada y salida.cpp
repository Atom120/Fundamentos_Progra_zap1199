// P006 Repaso Entrada y salida.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale>
#include<string>
#include<locale.h>

int main()
{//Decisiones anidadas
    setlocale(LC_ALL, "en_MX.UTF-8");
    
     std::string apodo = "atom120";
     std::string apodo_usuario;
     std::string contra = "hola123";
     std::string contra_usuario;

     std::cout << "hola inicia sesión " << std::endl;
     std::getline(std::cin, apodo_usuario);//con getline podemos ingresar espacios sin problemas en variables tipo string
     if (apodo == apodo_usuario)
     {
         std::cout << "para confirmar tu acceso ingresa tu contraseña: " << std::endl;
         std::getline(std::cin, contra_usuario);
         if (contra == contra_usuario)
         {
             std::cout << "Bienvenido " << apodo << std::endl;
         }
         else
         {
             std::cout << "saquese impostor" << std::endl;
         }
     }
     else
     {
         std::cout << "No conozco a ese usuario" << std::endl;
     }
     
    bool natacion;
    natacion = true;

    std::cout << "Entrenas natación??" << std::endl;
    std::cin >> natacion;
    if (natacion)
    {
        std::cout << " WOW, y que nadas?? " << std::endl;
    }
    else
    {
        std::cout << "que mal" << std::endl;
    }

    bool mayor = true;
    std::cout << "Eres mayor de edad??" << std::endl;
    std::cin >> mayor;

    if (mayor) {
        std::cout << "Bravo ya estas grande tilin." << std::endl;
    }
    else {
        std::cout << "Eres menor de edad tilin." << std::endl;
    }

    bool sum;
    int num;
    int numm = 33;

    std::cout << "Sabes sumar??" << std::endl;
    std::cin >> sum;
    if (sum)
    {


        std::cout << "a ver demustralo" << std::endl;
        std::cout << "Cuanto es?? 10 + 23 " << std::endl;
        std::cin >> num;
        if (num == numm)
        {
            std::cout << "Muy bien" << std::endl;
        }
        else
        {
            std::cout << "Que menso" << std::endl;
        }
    }
    else
    {
        std::cout << "Mhhhm" << std::endl;
    }

    bool ayuda;
    std::cout << "Estas bien??:'(" << std::endl;
    std::cin >> ayuda;
    if (ayuda==0)
    {
        std::cout << "Busca ayuda bb" << std::endl;
    }
    else
    {
        std::cout << " tonces vente pa´aca" << std::endl;
    }
}
