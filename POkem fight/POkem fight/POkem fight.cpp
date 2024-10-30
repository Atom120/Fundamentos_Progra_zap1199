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
    int cura = 30;
    int escudo = 20;


    std::cout << "Hola entrenador elige tu pokemnon\n";
    std::cout << "1.Charmander 2.Froakie 3.Gastly\n";
    std::cin >> opcion;
    system("cls");

    switch(opcion)
    {
    case 1:
        std::cout << "Felicidades tienes a Charmander\n";
        std::cout << "Quiere entrar en una batalla pokemon\n 1(si)/0(no)\n";
        std::cin >> opcion2;
        system("cls");
        if (opcion2)
        {
            std::cout << "Te enfrentas a otro entrenador\n";
            std::cout << "Su pokemon es cyndaquil\n";
            do
            { 
            std::cout << "Que quieres hacer??\n";
            std::cout << "1.Basico (25 atk)\n2.Especial (45 atk)\n3.Huir\n4.Objetos\n";
            std::cin >> opcion;
            switch (opcion)
            {
            case 1:
                vida-=basico;
                std::cout << "Ahora tiene " << vida << " hp" << std::endl;
                break;
            
            case 2:
                vida -= especial;
                std::cout << "Ahora tiene " << vida << " hp" << std::endl;
                break;

            case 3:
                std::cout << "Para salir presione 0\n";
                vida == 0;
                break;

            case 4:
                    std::cout << "Que quiere usar\n";
                    std::cout << "1.Curacion (30 hp) \n 2.Escudo (20 hp)\n";
                    std::cin >> opcion;
                    switch (opcion)
                    {
                    case 1:
                        vida2 + cura;
                        std::cout << "Te curaste " <<  cura << std::endl;
                        std::cout << "Tu vida es " << vida2 << " hp \n";
                        break;
                    case 2:
                        escudo;
                        std::cout << "Tienes un escudo " << std::endl;
                        std::cout << "Tu vida es " << vida2 << " hp \n";
                        break;
                    }
                    break;
            }
            
            std::cout << "Es el turno del enemigo\n";
            v1 = rand()%4;
            switch (v1)
            {
            case 1:
                vida2 -= basico;
                std::cout << "Tu oponente te ataco " << std::endl;
                std::cout << "Te hizo " << basico << " de daño" <<std::endl;
                std::cout << "Tu vida es " << vida2 << std::endl;
                break;

            case 2:
                vida2 -= especial;
                std::cout << "Tu oponente te ataco\n";
                std::cout << "Te hizo " << especial << " de daño" << std::endl;
                std::cout << "tu vida es " << vida2 << std::endl;
                break;

            case 3:
                v2 = rand() % 3;
                switch (v2)
                {
                case 1:
                    vida2 + cura;
                    std::cout << "El enemigo se curo " << cura << std::endl;
                    std::cout << "Vida enemiga " << vida2 << std::endl;
                    break;
                case 2:
                    escudo;
                    std::cout << "El enemigo se puso un escudo" << std::endl;
                    std::cout << "Vida enemiga " << vida2 << " (simbolo de un escudo)" << std::endl;
                    break;
                }
                break;
            }
            
            } while (vida >= 0 || vida2 >= 0);
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

/*
* class Personaje:
    def __init__(self, nombre, vida):
        self.nombre = nombre
        self.vida = vida

    def recibir_dano(self, dano, usar_escudo=False):
        if usar_escudo:
            dano *= 0.8  # Reducir el daño en un 20%
        self.vida -= dano
        self.vida = max(self.vida, 0)  # Asegurarse de que la vida no sea negativa
        print(f"{self.nombre} ha recibido {dano:.2f} de daño. Vida restante: {self.vida:.2f}")

    def esta_vivo(self):
        return self.vida > 0

# Ejemplo de uso
jugador = Personaje("Guerrero", 100)

# Simular recibir daño sin escudo
jugador.recibir_dano(30)

# Simular recibir daño con escudo
jugador.recibir_dano(30, usar_escudo=True)

# Verificar si el jugador está vivo
if jugador.esta_vivo():
    print(f"{jugador.nombre} sigue vivo.")
else:
    print(f"{jugador.nombre} ha caído en batalla.")
*/