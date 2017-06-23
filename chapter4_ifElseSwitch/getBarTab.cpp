//This program calculates the total amount of a restaurant or bar tab

int main()
{
  //Declare constants and variables
  double tax, tip, subtotalCost, totalCost;
  const double TAX_RATE = 0.08206;
  const double TIP_RATE = 0.20;

  //Get subtotal of tab
  std::cout << "How much is the subtotal? \n";
  std::cin >> subtotalCost;

  //Calculate tax
  tax = subtotalCost * TAX_RATE;

  //Show tax paid
  std::cout << "Tax amount: $" << tax << ". \n";

  //Calculate tip
  tip = (subtotalCost + tax) * TIP_RATE;

  //Show recommended tip
  std::cout << "The amount of tip you should give is " << tip << ". \n";

  //Calculate total cost
  totalCost = subtotalCost + tax + tip;

  //Display total cost
  std::cout << "The total amount of the meal is " << total << ". \n";

  return 0;

}
