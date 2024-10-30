// POkem fight.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <string>

int main()
{
    std::string basico;
    std::string especial;
    std::string cura;
    std::string escudo;

    std::string basico2;//Del enemigo
    std::string especial2;
    std::string cura2;
    std::string escudo2;

    int vida2 = 200;
    int vida = 200;

    int daniob = 0;
    int danioe = 0;
    int tipo = 0;//agua=1,fuego=2,oscuridad=3,
    int tipo2 = 0;//tipo del enemigo

    bool huir = false;
    int opcion;



    std::cout << "Hola entrenador\n";
    std::cout << "Quieres juegar <3?, si, si pon 1\n";
    std::cin >> opcion;
    if (opcion == 1)
    {
        std::cout << "Para empezar elige tu pochumon\n";
        std::cout << "1.Charmander 2.Froakie 3.Gastly\n";
        std::cin >> opcion;
        system("cls");

        switch (opcion)
        {
        case 1:
            tipo = 2;
            daniob = 20;
            danioe = 40;

            basico = "Bola de fuego\n";
            especial = "Cola de fuego\n";

        case 2:
            daniob = 20;
            danioe = 40;

            basico = "Burbujas\n";
            especial = "Shuriken de agua\n";
        case 3:
            daniob = 20;
            danioe = 40;

            basico = "Mirarte feo\n";
            especial = "Mirarte más feo\n";

            break;
        }

        std::cout << "Elige a tu rival\n";
        std::cout << "1.Pikachu 2.Zarek 3.Nita\n";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            tipo = 2;
            daniob = 20;
            danioe = 40;

            basico = "Rayito\n";
            especial = "Impactrueno\n";
            break;

        case 2:
            daniob = 20;
            danioe = 40;

            basico = "Gatazo\n";
            especial = "Ladrar\n";
            break;

        case 3:
            daniob = 20;
            danioe = 40;

            basico = "Terremoto\n";
            especial = "Osito\n";
            break;
        }
        do
        {

        } while ((vida >= 0 || vida2 >= 0) && huir != true);
    }
    else
    {
        std::cout << "bye pues:(";
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