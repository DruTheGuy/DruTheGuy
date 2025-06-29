#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  
  //calculate the temperature
  tempc = (tempf - 32) / 1.8;

  //output the answer
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
