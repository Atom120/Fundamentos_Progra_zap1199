// P011 Condicionales tarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//sebastian selvas garcia
/*Adivina quien
Realizar 5 preguntas para adivinar “tema libre”

Ejemplos :

Deportes
Videojuegos
Películas
*/

#include <iostream>

int main()
{
    bool balon;
	bool porteria;
	bool agua;
	bool red;
	bool herramienta;
	bool pie;
	bool vela;
	bool volar;
	bool barco;
	bool para;
	bool airelibre;
	bool fisico;
	bool hielo;

    std::cout << "Vamos a adivinar tu deporte\n";
	std::cout << "Usa balon?\n";
	std::cin >> balon; 
	if (balon == true)
	{
		std::cout << "Usa porteria?\n";
		std::cin >> porteria;
		if (porteria == true)
		{
				std::cout << "Es en el agua?\n";
				std::cin >> agua;
				if (agua == true)
				{
					std::cout << "Tu deporte es waterpolo\n";
				}
				else
				{
					std::cout << "Es en hielo??\n";
					std::cin >> hielo;
				}
			
		}
		else
		{
			std::cout << "El deporte tiene una red em medio de la cancha?\n";
			std::cin >> red;
			if (red == true)
			{
				std::cout << "Tu juego es volleyboll\n";
			}
			else
			{
				std::cout << "Todos los juegos son al aire libre??\n";
				std::cin >> airelibre;
				if (airelibre == true)
				{
					std::cout << "Tiene contacto fisico??\n";
					std::cin >> fisico;
					if (fisico == true)
					{
						std::cout << "Tu deporte es futboll americano\n";
					}
					else
					{
						std::cout << "Tu deporte es baseboll\n";
					}
				}
				else
				{
					std::cout << "Tu jugeo es Basketboll\n";
				}
			}
		}

	}
	else
	{
		std::cout << "Es en el agua?\n";
		std::cin >> agua;
		if (true==agua)
		{
			std::cout << "Usas alguna herramienta?\n";
			std::cin >> herramienta;
			if (true==herramienta)
			{
				std::cout << "Tienes que ir de pie??\n";
				std::cin >> pie;
				if (true==pie)
				{
					std::cout << "Usa una vela??\n";
					std::cin >> vela;
					if (true==pie)
					{
						std::cout << "Tu deporte es windsurf\n";
					}
					else
					{
						std::cout << "Tu deporte es surf\n";
					}
				}
				else
				{
					std::cout << "Usa un barco??\n";
					std::cin >> barco;
					if (true==barco)
					{
						std::cout << "Vuelas en el?\n";
						std::cin >> volar;
						if (true==volar)
						{
							std::cout << "Usas un paracaidas??\n";
							std::cin >> para;
							if (true==para)
							{
								std::cout << "Tu deporte es paracaidismo en el agua\n";
							}
							else
							{
								std::cout << "Tu deporte es flyboard\n";
							}
						}
					}
				}
			}
			else
			{

			}
		}
		else
		{
			std::cout << "Tiene contacto fisico??\n";
			<      
		}
	}

}

