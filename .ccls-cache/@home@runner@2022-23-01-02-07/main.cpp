#include <iostream>

int main() {

  int i = 100;
  std::cout << "i = " << i << std::endl << std::endl;

  int * p_i = &i; // & is the addressof operator in c/c++
  std::cout << "p_i = " << p_i << std::endl << std::endl;

  //* dereference opereartor
  std::cout << "*p_i = " << *p_i << std::endl << std::endl;

  *p_i = 200;
  std::cout << "i = " << i << std::endl << std::endl;
  return 0;
}