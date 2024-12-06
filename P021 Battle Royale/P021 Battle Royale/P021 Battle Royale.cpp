// P021 Battle Royale.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

// Enumerador para los Power-Ups
enum PowerUp {
    NONE = 0,
    BOOST = 10,
    DOUBLE = 20,
    TRIPLE = 30
};

// Estructura para representar a un jugador
struct Player {
    int id;
    int strength;
    int agility;
    int intelligence;
    int defense;
};

// Funciones
void assignProperties(Player& player) {
    player.strength = std::rand() % 51;
    player.agility = std::rand() % 51;
    player.intelligence = std::rand() % 51;
    player.defense = std::rand() % 51;
}

PowerUp assignPowerUp() {
    int random = std::rand() % 4; // 0 a 3
    switch (random) {
    case 0: return NONE;
    case 1: return BOOST;
    case 2: return DOUBLE;
    case 3: return TRIPLE;
    }
    return NONE;
}

void applyPowerUp(Player& player, PowerUp powerup) {
    switch (powerup) {
    case BOOST:
        player.strength += 5;
        player.agility += 5;
        player.intelligence += 5;
        player.defense += 5;
        break;
    case DOUBLE:
        player.strength *= 2;
        player.agility *= 2;
        player.intelligence *= 2;
        player.defense *= 2;
        break;
    case TRIPLE:
        player.strength *= 3;
        player.agility *= 3;
        player.intelligence *= 3;
        player.defense *= 3;
        break;
    default:
        break;
    }
}

void comparePlayers(Player players[], int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (players[i].strength > players[j].strength) {
                std::cout << "Player " << players[i].id << " es más fuerte que " << players[j].id << "\n";
            }
            else {
                std::cout << "Player " << players[j].id << " es más fuerte que " << players[i].id << "\n";
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (players[i].agility > players[j].agility) {
                std::cout << "Player " << players[i].id << " es más agil que " << players[j].id << "\n";
            }
            else {
                std::cout << "Player " << players[j].id << " es más agil que " << players[i].id << "\n";
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (players[i].defense > players[j].defense) {
                std::cout << "Player " << players[i].id << " es más resistente que " << players[j].id << "\n";
            }
            else {
                std::cout << "Player " << players[j].id << " es más resistente que " << players[i].id << "\n";
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (players[i].intelligence > players[j].intelligence) {
                std::cout << "Player " << players[i].id << " es más inteligente que " << players[j].id << "\n";
            }
            else {
                std::cout << "Player " << players[j].id << " es más inteligente que " << players[i].id << "\n";
            }
        }
    }
}
    
int main() {
    const int numPlayers = 20;
    Player players[numPlayers];

    std::srand(std::time(0)); // Semilla para generar números aleatorios

    // Inicializar y asignar propiedades a los jugadores
    for (int i = 0; i < numPlayers; ++i) {
        players[i].id = i + 1;
        assignProperties(players[i]);
        PowerUp powerup = assignPowerUp();
        applyPowerUp(players[i], powerup);
    }

    // Comparar jugadores
    comparePlayers(players, numPlayers);

    return 0;
}

