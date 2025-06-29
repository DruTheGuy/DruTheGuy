#include <iostream>

int main() {
  // Define the variables
  double feet;
  double meters;

  //convert the variables
  meters = feet*0.3;

  //Input the feet
  std::cout << "Input feet: ";
  std::cin >> feet;
  
  //output the answer
  std::cout << "The length is " << meters << " long\n";
  }