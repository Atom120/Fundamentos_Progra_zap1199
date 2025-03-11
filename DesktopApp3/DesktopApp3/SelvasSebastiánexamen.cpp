#include <iostream>

using namespace std;

int main()
{
	int num;

	std::cout << "Hola usuario porfavor ingresa un numero" << std::endl;
	std::cin >> num;

	for (int i = 1; i < num + 1; i++)
	{
		if (i % 2 == 0)
		{
			
				std::cout << "numero pares: " << i << std::endl;
		}
	    else
	   {
		std::cout << "Numeros impares: " << i << std::endl;
	   }
	}
	std::cout << "Hola ususario porfavor ingresa un numero " << std::endl;
}

//Lo deás no se supe
#include <iostream>
