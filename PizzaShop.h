#ifndef PIZZASHOP_H

#define PIZZASHOP_H

#include <string>
float calculatePizzaCost(int numSmallPizzas, int numLargePizzas, int numToppings);
void printPizzaOrder(int numSmallPizzas, int numLargePizzas, int numToppings);
std::string formatCurrency(float amount);
std::string getCostPadding(int numItems);

#endif