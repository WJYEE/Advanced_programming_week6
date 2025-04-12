#include <iostream>

class Calculator {
private:
  double result;

public:
  Calculator() : result(0) {}

  Calculator& add(double value) {
    result += value;
    return *this;
  }

  Calculator& subtract(double value) {
    result -= value;
    return *this;
  }

  Calculator& multiply(double value) {
    result *= value;
    return *this;
  }

  Calculator& divide(double value) {
    if (value != 0) {
      result /= value;
    } else {
      std::cerr << "Cannot divide by zero" << std::endl;
    }
    return *this;
  }

  double getResult() const {
    return result;
  }
};

int main() {
  Calculator calc;
  calc.add(10).subtract(2).multiply(3).divide(4);
  std::cout << "Result: " << calc.getResult() << std::endl;
  return 0;
}

