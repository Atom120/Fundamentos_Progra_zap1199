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
#include<locale.h>

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
	bool puntuacion;
	bool alto;
	bool aje;
	bool patadas;
	bool bra;
	bool bailar;
	bool cintas;
	bool pelblanc;
	bool pelotin;
	bool hilos;
	bool gordo;
	bool bofe;
	bool comp;
	bool mesa;
	bool palo;

	setlocale(LC_ALL, "en_MX.UTF-8");

	std::cout << "Vamos a adivinar tu deporte\n";
	std::cout << "Usa balon o pelota?\n";
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
				if (hielo == true)
				{
					std::cout << "Lanzan con la mano el balon??\n";
					std::cin >> hielo;
					if (hielo == true)
					{
						std::cout << "Tu deporte es el curling\n";
					}
					else
					{
						std::cout << "Tu deporte es el hockey\n";
					}
				}
				else
				{
					std::cout << "Tu deporte es el futball\n";
				}
			}

		}
		else
		{
			std::cout << "El deporte tiene una red en medio de la cancha?\n";
			std::cin >> red;
			if (red == true)
			{
				std::cout << "Usa una pelota pequeña??\n";
				std::cin >> pelotin;
				if (pelotin == true)
				{
					std::cout << "Usa una pelota blanca??\n";
					std::cin >> pelblanc;
					if (pelblanc == true)
					{
						std::cout << "Tu deporte es badminton\n";
					}
					else
					{
						std::cout << "Su raqueta usa hilos??\n";
						std::cin >> hilos;
						if (hilos == true)
						{
							std::cout << "Tu deporte es tennis\n";
						}
						else
						{
							std::cout << "Se necesita una mesa??\n";
							std::cin >> mesa;
							if (mesa == true)
							{
								std::cout << "Tu deporte es pingpong\n";
							}
							else
							{
								std::cout << "Tu deporte es padel\n";
							}
						}
					}
				}
				else
				{
					std::cout << "Tu deporte es volleyball\n";
				}
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
						std::cout << "Se utiliza un palo plano??\n";
						std::cin >> palo;
						if (palo == true)
						{
							std::cout << "Se utiliza un animal??\n";
							std::cin >> palo;
							if (palo == true)
							{
								std::cout << "Tu deporte es el polo\n";
							}
							else
							{
								std::cout << "Tu deporte es el cricket\n";
							}
						}
						else
						{
							std::cout << "Tu deporte es baseball\n";
						}
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
		if (true == agua)
		{
			std::cout << "Usas alguna herramienta?\n";
			std::cin >> herramienta;
			if (true == herramienta)
			{
				std::cout << "Tienes que ir de pie??\n";
				std::cin >> pie;
				if (true == pie)
				{
					std::cout << "Usa una vela??\n";
					std::cin >> vela;
					if (true == pie)
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
					if (true == barco)
					{
						std::cout << "Vuelas en el?\n";
						std::cin >> volar;
						if (true == volar)
						{
							std::cout << "Usas un paracaidas??\n";
							std::cin >> para;
							if (true == para)
							{
								std::cout << "Tu deporte es paracaidismo en el agua\n";
							}
							else
							{
								std::cout << "Tu deporte es flyboard\n";
							}
						}
					}
					else
					{
						std::cout << "Tu deporte es kayak\n";
					}
				}
			}
			else
			{
				std::cout << "Se gana por puntuación??\n";
				std::cin >> puntuacion;
				if (puntuacion == true)
				{
					std::cout << "Tienes que saltar de algun lugar alto??\n";
					std::cin >> alto;
					if (alto == true)
					{
						std::cout << "Tu deporte es clavados\n";
					}
					else
					{
						std::cout << "Tu deporte es nado sincronizado o artistica\n";
					}
				}
				else
				{
					std::cout << "Tu deporte es natación\n";
				}
			}
		}
		else
		{
			std::cout << "Tiene contacto fisico??\n";
			std::cin >> fisico;
			if (fisico == true)
			{
				std::cout << "Se puede usar patadas??\n";
				std::cin >> patadas;
				if (patadas == true)
				{
					std::cout << "Parece que estan bailando??\n";
					std::cin >> bailar;
					if (bailar == true)
					{
						std::cout << "Tu deporte es capoeira\n";
					}
					else
					{
						std::cout << "Tu deporte viene de Brazil\n";
						std::cin >> bra;
						if (bra == true)
						{
							std::cout << "Tiene rangos por cintas??\n";
							std::cin >> cintas;
							if (cintas == true)
							{
								std::cout << "Tu deporte es Jiujitsu Brazilian\n";
							}
							else
							{
								std::cout << "Estos son los posibles deportes:Vale Tudo, Kombato y Luta Livre\n";
							}
						}
						else
						{
							std::cout << "Tiene rangos por cintas??\n";
							std::cin >> cintas;
							if (cintas == true)
							{
								std::cout << "Es uno de estos dos: Judo, Kárate, Taekwondo\n";
							}
							else
							{
								std::cout << "Tienes que estar muy rellenito de amor o rechoncho o sobrepasadito o masivo o excesivo O se recomienda??\n";
								std::cin >> gordo;
								if (gordo == true)
								{
									std::cout << "Tienes que dar bofetadas??\n";
									std::cin >> bofe;
									if (bofe == true)
									{
										std::cout << "Tu deporte es Power Slap o Slap Fight\n";
									}
									else
									{
										std::cout << "Tu deporte es sumo\n";
									}
								}
							}
						}
					}
				}
				else
				{
					std::cout << "Juegas ajedrez en el??\n";
					std::cin >> aje;
					if (aje == true)
					{
						std::cout << "Tu deporte es chessboxing\n";
					}
					else
					{
						std::cout << "Tu deporte es box\n";
					}
				}
			}
			else
			{
				std::cout << "Es en la nieve??\n";
				std::cin >> hielo;
				if (hielo == true)
				{
					std::cout << "Te mantienes de pie??\n";
					std::cin >> hielo;
					if (hielo == true)
					{
						std::cout << "Es snowboarding o skii\n";
					}
					else
					{
						std::cout << "Tu deporte es Skeleton\n";
					}
				}
				else
				{
					std::cout << "Usa un liston??\n";
					std::cin >> cintas;
					if (cintas == true)
					{
						std::cout << "Tu deporte es gimnasia ritmica\n";
					}
					else
					{
						std::cout << "Se baila en el??\n";
						std::cin >> bailar;
						if (bailar == true)
						{
							std::cout << "Se puede competir en el??\n";
							std::cin >> comp;
							if (comp == true)
							{
								std::cout << "Proviene de la calle\n";
								std::cin >> bailar;
								if (bailar == true)
								{
									std::cout << "Tu deporte es brakedance\n";
								}
								else
								{
									std::cout << "Tu deporte es: Tango, Salsa. Merengue. etc...\n";
								}
							}
							else
							{
								std::cout << "Tu deporte es zumba\n";
							}
						}
						else
						{
							std::cout << "Tu deporte es el gym\n";
						}

					}
				}
			}
		}

	}
}

