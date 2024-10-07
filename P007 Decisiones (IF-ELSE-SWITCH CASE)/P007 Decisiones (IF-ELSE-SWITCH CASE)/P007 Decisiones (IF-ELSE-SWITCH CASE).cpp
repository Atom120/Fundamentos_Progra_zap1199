// P007 Decisiones (IF-ELSE-SWITCH CASE).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale.h>

int main()
{
    int peleadores;
    setlocale(LC_ALL, "en_MX.UTF-8");

    std::cout << "Hola estas en una arena de combate, primero que nada ¿cuántos luchadores ves?\n";
    std::cin >> peleadores;
    if (peleadores > 1)
    {
        std::cout << "Hay 1 pelea de Rumble" << std::endl;
    }
    else
    {
        std::cout << "No hay peleas en un Rumble" << std::endl;
    }

    //eliminatoria directa
    peleadores -= 1;
    std::cout << "En eliminatoria directa hay " << peleadores << " Peleas "<< std::endl;

    //Grupos/semis y final
    int grupo;
    int peleas;

    grupo = peleadores / 4;//si son grupos de 4
    peleas = grupo * 6;

    std::cout << "En la fase de grupos hay " << peleas << "peleas" << std::endl;
}
