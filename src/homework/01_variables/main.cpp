//write include statements
#include "variables.h"

//write namespace using statement for cout
using std::cout;    using std::cin;

int main() {
  //setting up veriables needed for the program
  double meal_amount,tip_rate,tip_amount,tax_rate,tax_amount,total;
  cout<<"enter the total price for the meal ";
  cin>>meal_amount;
  //calculating the total tax for the meal
  tax_amount = get_sales_tax(meal_amount);
  //calculates the tip total
  cout<<"Enter the tip rate as a decimal ";
  cin>>tip_rate;
  tip_amount = get_tip_amount(meal_amount,tip_rate);
  //calculates the total of everything
  total = meal_amount + tax_amount + tip_amount;
  //displays a sumary of the purchase
  cout<<"    RECIPT \n";
  cout<<"Meal amount:"<<meal_amount<< "\n";
  cout<<"Sales tax:"<<tax_amount<<"\n";
  cout<<"Tip amount:"<<tip_amount<<"\n";
  cout<<"Total:"<<total<<"\n";

  return 0;

}