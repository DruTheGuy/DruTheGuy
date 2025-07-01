#include <iostream>

int main() {
  // Define the variables
  double feet;
  double meters;

  //Input the feet
  std::cout << "Input feet: ";
  std::cin >> feet;
  
  //convert the variables
  meters = feet*0.3;
  
  //output the answer
  std::cout << "The length is " << meters << " long\n";
  }
