// P010 Condicionales tarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*Utilizar las decisiones simples para realizar una comparación de datos - Login en un videojuego.
Protegiendo al código de recibir solo letras o solo números según sea el caso.*/

#include <iostream>
#include<locale>
#include<string>
#include<locale.h>


int main()
{
        setlocale(LC_ALL, "en_MX.UTF-8");
        std::string apodo = "Yo";
        std::string apodo_usuario;
        std::string contra = "hola123";
        std::string contra_usuario;
        std::cout << "hola ususario dame tu nick name" << std::endl;
        std::getline(std::cin, apodo_usuario);//con getline podemos ingresar espacios sin problemas en variables tipo string
        if (apodo == apodo_usuario) {
            std::cout << "para confirmar tu acceso ingresa tu contraseña: " << std::endl;
            std::getline(std::cin, contra_usuario);
            if (contra == contra_usuario) {
                std::cout << "Bienvenido " << apodo << std::endl;
            }
            else {
                std::cout << "saquese impostor" << std::endl;
            }
        }
        else
        {
            std::cout << "No conozco a ese usuario" << std::endl;
        }
        system("pause");
        system("cls");


        int opcion = 0;
        while (opcion != 1000)
        {
        std::cout << "Que es lo primero que haces al despertar?" << std::endl;
        std::cout << "1.- Tomas un baño? 2.-Desayunas? 3.-Corres porque ya se te hizo tarde? 1000.-Para salir" << std::endl;
        std::cin >> opcion;
       
        if (!std::cin.fail())
        {
           

            switch (opcion)//Evaluar la opción y dependiendop del caso ejecutaremos
            {
            case 1:
                std::cout << " Disfruta el baño. Se ejecuta la primera opción" << std::endl;
                break;
            case 2:
                std::cout << "Echale al desayuno. Se ejecuta la 2da opción" << std::endl;
                break;
            case 3:
                std::cout << "correle correle. Se ejecuta la 3ra opción" << std::endl;
                break;
            case 1000:
                break;
            default:
                std::cout << "Opción fuera del rango, repitelo" << std::endl;
                break;

            }
        }
        else
        { 
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Pon una opcion valida" << std::endl;
        }

        }
}