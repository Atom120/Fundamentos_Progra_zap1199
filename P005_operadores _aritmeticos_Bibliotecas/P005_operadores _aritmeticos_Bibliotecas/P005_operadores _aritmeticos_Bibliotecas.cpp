// P005_operadores _aritmeticos_Bibliotecas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include<locale.h>
int main()
{
	
	setlocale(LC_ALL, "en_MX.UTF-8");
	float n1, n2;

	std::cout << "Porfa ingresa dos numeros, se realizaran operaciones con estas." << std::endl;
	std::cout << "Numero uno" << std::endl;
	std::cin >> n1;
	std::cout << "Numero dos" << std::endl;
	std::cin >> n2;
	std::cout << "Suma " << n1 + n2 << std::endl;
	std::cout << "Resta " << n1 - n2 << std::endl;
	std::cout << "Multi " << n1 * n2 << std::endl;
	std::cout << "división " << n1 / n2 << std::endl;
	std::cout << "Potencia " << std::pow(n1, n2) << std::endl;
	std::cout << "Raiz " << std::pow(n1, 1 / n2) << std::endl;
}
