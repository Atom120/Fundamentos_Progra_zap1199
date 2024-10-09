// P007 Decisiones (IF-ELSE-SWITCH CASE).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale.h>

int main()
{
    int opcion;
    int peleadores;
    setlocale(LC_ALL, "en_MX.UTF-8");
    

    std::cout << "Hola estas en una arena de combate, primero que nada ¿cuántos luchadores ves?\n";
    std::cin >> peleadores;
    std::cout << "Muy bien, que tipo de pelea quieres" << std::endl;
    std::cout << "1.- Eliminatoria directa 2.- Royal Rumble 3.- Grupos/semis y final" << std::endl;
    std::cin >> opcion;
    
    switch (opcion)
    {
    case 1:

        if (peleadores > 1)
        {
            std::cout << "Hay 1 pelea de Rumble" << std::endl;
        }
        else
        {
            std::cout << "No hay peleas en un Rumble" << std::endl;
        }
        break;
       
    case 2:
     

        //eliminatoria directa
        peleadores -= 1;
        std::cout << "En eliminatoria directa hay " << peleadores << "  peleas " << std::endl;

     
     break;

    case 3:
    
        //Grupos/semis y final
        int grupo;
        int peleas;
        int semi;
        

        grupo = peleadores / 4;//si son grupos de 4
        peleas = grupo * 6;
        std::cout << "En la fase de grupos hay " << peleas << " peleas" << std::endl;
        std::cout << "Y pasan " << peleadores / 2 << " peleadores" << std::endl;

        //semifinal
        semi = peleadores / 4;
            std::cout << "En semis habría " << semi << " peleas" << std::endl;

        //final
            std::cout << "Para la final habría " << semi-1 << " peleas";
    
    break;
    }

    }
   

 
