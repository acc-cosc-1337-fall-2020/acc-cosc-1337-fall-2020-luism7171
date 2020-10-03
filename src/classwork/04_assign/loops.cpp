#include "loops.h"
int factorial(int num1)
{
  
  int acumulator = 1,
      total = 1;//sets the accumulator and total to 1
//the loop does all the math until the acumulator equals the num entered
  while (acumulator <= num1){
    total = total * acumulator; 
    acumulator++;
   

  }
  return total;
}