// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double cost, tax, tip;
  double total;

  std::cout << "What is the cost of the meal? ";
  std::cin >> cost;

  tip = cost * 0.20;

  tax = cost *0.0775;

  total = tax + tip + cost;

  std::cout << "The total cost of the meal is "<< total <<".\n";

  return 0;
}
