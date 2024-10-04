// P003_login.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale>
#include<string>

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
        std::cout << "para confirmar tu acceso ingresa tu contraseña: "<< std::endl;
        std::getline(std::cin, contra_usuario);
        if(contra==contra_usuario){
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
        //Decisiones multiples
        int opcion = 0;
        std::cout << "Que es lo primero que haces al despertar?"<< std::endl;
    std::cout << "1.- Tomas un baño? 2.-Desayunas? 3.-Corres porque ya se te hizo tarde?";
    std::cin >> opcion;
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
    default:
        std::cout << "Opción fuera del rango" << std::endl;
        break;

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
