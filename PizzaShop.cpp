
#include "PizzaShop.h"
#include <iostream>
#include <map>
using namespace std;

map<string, float> pizzaPrices = {
    {"small", 12.99},
    {"large", 17.99},
    {"topping", 1.25}
};

void printPizzaOrder(int numSmallPizzas, int numLargePizzas, int numToppings)
{
    const string lineSeparator = "------------------------------";
    
    cout << lineSeparator << endl;
    cout << "Pizza Order Summary:" << endl;

    cout << lineSeparator << endl;
    cout << "Small Pizzas: " << numSmallPizzas << getCostPadding(numSmallPizzas) << formatCurrency(numSmallPizzas * pizzaPrices["small"]) << endl;
    cout << "Large Pizzas: " << numLargePizzas << getCostPadding(numLargePizzas) << formatCurrency(numLargePizzas * pizzaPrices["large"]) << endl;
    cout << "Toppings:     " << numToppings    << getCostPadding(numToppings)    << formatCurrency(numToppings * pizzaPrices["topping"])  << endl;
    cout << lineSeparator << endl;

    float totalCost = calculatePizzaCost(numSmallPizzas, numLargePizzas, numToppings);
    cout << "Total Cost:" << "      " << formatCurrency(totalCost) << endl;
}

float calculatePizzaCost(int numSmallPizzas, int numLargePizzas, int numToppings)
{    
    return (numSmallPizzas * pizzaPrices["small"])
         + (numLargePizzas * pizzaPrices["large"])
         + (numToppings * pizzaPrices["topping"]);
}
string formatCurrency(float amount)
{   
    string strAmount = to_string(static_cast<int>(amount * 100) / 100.0);
    strAmount.erase(strAmount.size() - 4); 
    return "$" + strAmount;
}

string getCostPadding(int numItems){
    string costSpacing = "        ";

    if (to_string(numItems).size() < costSpacing.size()) {
        costSpacing.erase(costSpacing.size() - to_string(numItems).size());
    }else {
        costSpacing = "";
    }

    return costSpacing;
}