// POkem fight.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>

int main()
{
    int basico = 25;
    int especial = 45;
    int objeto = 30;
    bool huir;
    int vida = 200;
    int opcion;
    int vida2 =200;
    bool opcion2;
    int v1;
    int v2;

    std::cout << "Hola entrenador elige tu pokemnon\n";
    std::cout << "1.Charmander 2.Froakie 3.Gastly\n";
    std::cin >> opcion;

    switch(opcion)
    {
    case 1:
        std::cout << "Felicidades tienes a Charmander\n";
        std::cout << "Quiere entrar en una batalla pokemon\n";
        std::cin >> opcion2;
        if (opcion2)
        {
            std::cout << "Te enfrentas a otro entrenador\n";
            std::cout << "Su pokemon es cyndaquil\n";
            do
            { 
            std::cout << "Que quieres hacer??\n";
            std::cout << "1.Basico 2.Especial 3.Huir 4.Objetos\n";
            std::cin >> opcion;
            switch (opcion)
            {
            case 1:
                vida-=basico;
                std::cout << "Ahora tiene " << vida << std::endl;
                break;
            
            case 2:
                vida -= especial;
                std::cout << "Ahora tiene " << vida << std::endl;
                break;

            case 3:
                std::cout << "Te saliste de la batalla\n";
                break;

            case 4:
                    std::cout << "Que quiere usar\n";
                    std::cout << "1.Curacion 2.Escudo\n";
                    std::cin >> opcion;
                    switch (opcion)
                    {
                    case 1:
                        vida2 + 30;
                        std::cout << "Tu vida es " << vida2;
                        break;
                    case 2:
                        vida2 + 20;
                        std::cout << "Tu vida es " << vida2;
                        break;
                    }
                    break;
            }
            std::cout << "Es el turno del enemigo\n";
            std::cout << "Ahora tienes  " << vida2 << std::endl;
            v1 = rand()%5;
            switch (v1)
            {
            case 1:
                vida2 -= basico;
                std::cout << "Ahora tienes " << vida2 << std::endl;
                break;

            case 2:
                vida2 -= especial;
                std::cout << "Tu oponente te ataco\n";
                std::cout << "Ahora tienes " << vida2 << std::endl;
                break;

            case 3:
                std::cout << "Te saliste de la batalla\n";
                break;

            case 4:
                v2 = rand() % 3;
                switch (v2)
                {
                case 1:
                    vida2 + 30;
                    std::cout << "Su vida es " << vida2 << std::endl;
                    break;
                case 2:
                    vida2 + 20;
                    std::cout << "Su vida es " << vida2 << std::endl;
                    break;
                }
                break;
            }
            } while (vida >= 0, vida2>=0);
        }
        else
        {
            std::cout << "No vemos\n";
        }
        break;
    case 2:
        std::cout << "Felicidades tienes a Froakie\n";
        std::cout << "Quiere entrar en una batalla pokemon\n";
        std::cin >> opcion2;
        if (opcion2)
        {
            std::cout << "Te enfrentas a otro entrenador\n";
            std::cout << "Su pokemon es cyndaquil\n";
            do
            { 
            std::cout << "Que quieres hacer??\n";
            std::cout << "1.Basico 2.Especial 3.Huir 4.Objetos\n";
            std::cin >> opcion;
            switch (opcion)
            {
            case 1:
                vida -= basico;
                std::cout << "Ahora tiene " << vida << std::endl;
                break;

            case 2:
                vida -= especial;
                std::cout << "Ahora tiene " << vida << std::endl;
                break;

            case 3:
                std::cout << "Te saliste de la batalla\n";
                break;

            case 4:
                std::cout << "Que quiere usar\n";
                std::cout << "1.Curacion 2.Escudo\n";
                std::cin >> opcion;
                switch (opcion)
                {
                case 1:
                    vida2 + 30;
                    std::cout << "Tu vida es " << vida2;
                    break;
                case 2:
                    vida2 + 20;
                    std::cout << "Tu vida es " << vida2;
                    break;
                }
                break;
            }
            } while (vida >= 0);
        }
        else
        {
            std::cout << "No vemos\n";
        }
        break;
    case 3:
        std::cout << "Felicidades tienes a Gastly\n";
        std::cout << "Quiere entrar en una batalla pokemon\n";
        std::cin >> opcion2;
        if (opcion2)
        {
            std::cout << "Te enfrentas a otro entrenador\n";
            std::cout << "Su pokemon es cyndaquil\n";
            do{
            std::cout << "Que quieres hacer??\n";
            std::cout << "1.Basico 2.Especial 3.Huir 4.Objetos\n";
            std::cin >> opcion;
            switch (opcion)
            {
            case 1:
                vida -= basico;
                std::cout << "Ahora tiene " << vida << std::endl;
                break;

            case 2:
                vida -= especial;
                std::cout << "Ahora tiene " << vida << std::endl;
                break;

            case 3:
                std::cout << "Te saliste de la batalla\n";
                break;

            case 4:
                std::cout << "Que quiere usar\n";
                std::cout << "1.Curacion 2.Escudo\n";
                std::cin >> opcion;
                switch (opcion)
                {
                case 1:
                    vida2 + 30;
                    std::cout << "Tu vida es " << vida2;
                    break;
                case 2:
                    vida2 + 20;
                    std::cout << "Tu vida es " << vida2;
                    break;
                }
                break;
            }
            } while (vida >= 0);
        }
        else
        {
            std::cout << "No vemos\n";
        }

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
