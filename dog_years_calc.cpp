#include <iostream>

int main() {
  //declares the input variable
  int dog_age;
  //sets the first two years of the dog's age
  int early_years, later_years, human_years;

  //input
  std::cout << "please input your dog's age ";
  std::cin >> dog_age;

  //sets the early years to 21
  early_years = 21;
  //this calculates the age in human years
  later_years = (dog_age - 2) * 4;
  human_years = early_years + later_years;
  //output
  std::cout << "I am " <<  human_years << " in human years.\n";
  
  return 0;
}