
/*
Sai Anirvinya Kolli 
11/13/25
pizza shop function program 
*/

#include <iostream>
#include "PizzaShop.h"
using namespace std;

int main()
{
    int smallPizzas;
    int largePizzas;
    int toppings;

    cout << "Enter the number of small pizzas: ";
    cin >> smallPizzas;
    cout << "Enter the number of large pizzas: ";
    cin >> largePizzas;
    cout << "Enter the number of toppings: ";
    cin >> toppings;
    cout << endl;

    printPizzaOrder(smallPizzas, largePizzas, toppings);
    return 0;
}
