// P009 Condicionales tarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*Utilizar decisiones múltiples para realizar una calculadora.
Case 1: Suma
Case 2 : Resta
Case 3 : Multi
Case 4 : Div
Case 5 : Valor Absoluto
Case 6 : Mayor y menor que
*/

#include <iostream>
#include <math.h>

int main()
{
    int opcion;
    float num1;
    float num2;
    std::cout << "Hello sir, how can i help u?\n";
    std::cout << "Do u want to do some operation? Excellent wich do u prefer?\n";
    std::cout << "1)addition 2)subtracion 3)multi 4)div 5)absolute vaule 6) greater-less than\n";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1:
        std::cout << "Which numbers do u wanna addition? \n";
        std::cin >> num1;
        std::cin >> num2;
        std::cout << "This is the result " << num1 + num2;
        break;

    case 2:
        std::cout << "Which numbers do u wanna subtracion? \n";
        std::cin >> num1;
        std::cin >> num2;
        std::cout << "This is the result " << num1 - num2;
        break;

    case 3:
        std::cout << "Which numbers do u wanna multiplicate? \n";
        std::cin >> num1;
        std::cin >> num2;
        std::cout << "This is the result " << num1 * num2;
        break;

    case 4:
        std::cout << "Which numbers do u wanna div? \n";
        std::cin >> num1;
        std::cin >> num2;
        std::cout << "This is the result " << num1 / num2;
        break;

    case 5:
        std::cout << "Which numbers do u wanna know the absolute number? \n";
        std::cin >> num1;
        std::cin >> num2;

        if (num1 < 0)
        {
            std::cout << "This is your result " << num1*-1 << std::endl;
        }
        else
        {
            std::cout << "This is ur result " << num1 << std::endl;
        }
        if (num2 < 0)
        {
            std::cout << "This is your result " << num2 * -1 << std::endl;
        }
        else
        {
            std::cout << "This is ur result " << num2 << std::endl;
        }
        break;

    case 6:
        std::cout << "Which numbers do u wanna to make greater-less than \n";
        std::cin >> num1;
        std::cin >> num2;
        if (num1 < num2)
        {
            std::cout << num2 << " is less than " << num1 << std::endl;
        }
        else if (num1 = num2)
        {
            std::cout << num2 << " are the same " << num1 << std::endl;
        }
        else
        {
            std::cout << num1 << " is greater than " << num2 << std::endl;

        }
        break;
    }
}
