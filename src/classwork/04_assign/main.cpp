#include "loops.h"
#include <iostream>

using std::cout; using std::cin;

int main (){
  int num1,total; // creates a variable for total and num1
  char choice; // creates a variable for the leeter that decides to run loop again
  choice = 'y';


  while (choice == 'y' || choice == 'Y')//this loop iterates as long as y or Y is selected
  {
    do// this loop ask the user for a number and makes sure its a valid number
    {
      //promts user for number
      cout<<"Enter a number in the range of 1 trough 20 \n";
      cin>>num1;


    }while(num1 < 1 || num1 > 20);
    total = factorial(num1);//calls factorial function and sets it up in total veriable 
    cout<<"the factorial total of "<<num1<<" is "<<total<<'\n';//displays results
   
    cout<<"would u like to run the program again\n";
    cin>>choice;//ask user if we would like to run the loop again
  }

  return 0;
}