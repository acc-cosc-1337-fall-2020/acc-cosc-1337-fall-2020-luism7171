#include"decision.h"
//cpp
std::string get_letter_grade_using_if(int grade)
{
  std::string grade_as_letter;

  if (grade >= 90 && grade <= 100){
    grade_as_letter = "A";
  }
  else if (grade >= 80 && grade <= 89){
    grade_as_letter = "B";
  }
  else if (grade >= 70 && grade <= 79){
    grade_as_letter = "C";
  }
  else if (grade >= 60 && grade <= 69){
    grade_as_letter = "D";
  }
  else if (grade >= 0 && grade <= 59){
    grade_as_letter = "F";
  }
  else{
    grade_as_letter = "The grade you enetered is not valid please enter a grade in the range of 0 t0 100";
    
  }
return grade_as_letter;
}

std::string get_letter_grade_using_switch(int grade1)
{
  std::string return_val;

  switch(grade1/10)
  {
  case 9:
      return_val = "A";
      break;
  case 8:
      return_val =  "B";
      break;
  case 7:
      return_val =  "C";
      break;    
  case 6:
      return_val = "D";
      break; 
  case 5:
  case 4:
  case 3:
  case 2:
  case 1: 
  case 0:
      return_val = "F";
      break;   

  default:
     return_val = "invalid option chose a valid grade";
     break;


  }

  return return_val;

}