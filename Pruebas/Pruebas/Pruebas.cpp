// Pruebas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale.h>

int main()
{
    bool tos;
    bool fie;
    bool respirar;
    setlocale(LC_ALL, "en_MX.UTF-8");

        std::cout << "Tienes fiebre??";

        std::cin >> fie;

        if (fie == true)

        {

            std::cout << "Tienes tos seca??";

            std::cin >> tos;

            if (tos == true)

            {

                std::cout << "Tienes dificultad para respirar??";

                std::cin >> respirar;

                if (respirar == true)

                {

                    std::cout << "Vaya al hospital";

                }

                else

                {

                    std::cout << "Quédate en tu casa";

                }

            }

            else

            {

                std::cout << "Tienes dificultad para respirar??";

                std::cin >> respirar;

                if (respirar == true)

                {
                    std::cout << "Quédate en tu casa";
                }
                else
                {
                    std::cout << "Puede ser solo gripa";
                }


            }

        }

        else

        {

            std::cout << "Tienes tos seca??";

            std::cin >> tos;

            if (tos == true)

            {

                std::cout << "Tienes dificultad para respirar??";

                std::cin >> respirar;
                if (respirar == true)
                {
                    std::cout << "Quédate en tu casa";
                }
                else
                {
                    std::cout << "Puede ser solo gripa";
                }

            }

            else

            {

                std::cout << "Tienes dificultad para respirar??";

                std::cin >> respirar;

                if (respirar == true)

                {

                    std::cout << "Puede ser solo gripa";

                }
                else
                {
                    std::cout << "Usdted esta sano";
                }
            }

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
