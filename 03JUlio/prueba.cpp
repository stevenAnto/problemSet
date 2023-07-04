#include <iostream>
#include <typeinfo>

int main() {
  double x = 1.5;
  std::cout << "El tipo de dato de x es: " << typeid(x).name() << std::endl;

  return 0;
}
