//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>
//Write namespace using statements for cout and cin



using std::cout;    using std::cin;

int main() 
{
  // converts graades using the if statements
  //captures the grade as ints
  int grade,letter_grade;
  cout<<"Enter the grade of the test \n";
  cin>>grade;

  if(grade >= 0 && grade <= 100)
  {
    //out puts the grades as letter
    std::string result = letter_grade_using_if (grade);
    cout<<"The grade as a letter grade is" <<result ;
    //this is the same code but in switch form
    int grade1;
    cin>>grade1;
      std::string result1 = letter_grade_using_switch(grade1);
    cout<<"your grade is an\n";
    cout<<result1; 
  }
  else
  {
    cout<<"Grade must be between 0 and 100.";
  }



 
 
  return 0;

}