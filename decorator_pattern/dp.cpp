#include <iostream>
#include <memory>

// Base class
class Coffee {
public:
  virtual ~Coffee() = default;
  virtual double cost() const {
    return 5.0;
  }
};

// Decorator base class
class CoffeeDecorator : public Coffee {
protected:
  std::shared_ptr<Coffee> coffee;
public:
  CoffeeDecorator(std::shared_ptr<Coffee> coffee) : coffee(std::move(coffee)) {}
  double cost() const override {
    return coffee->cost();
  }
};

// Milk decorator
class MilkDecorator : public CoffeeDecorator {
public:
  MilkDecorator(std::shared_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}
  double cost() const override {
    return coffee->cost() + 2.0;
  }
};

// Sugar decorator
class SugarDecorator : public CoffeeDecorator {
public:
  SugarDecorator(std::shared_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}
  double cost() const override {
    return coffee->cost() + 1.0;
  }
};

int main() {
  std::shared_ptr<Coffee> basicCoffee = std::make_shared<Coffee>();
  std::shared_ptr<Coffee> milkCoffee = std::make_shared<MilkDecorator>(basicCoffee);
  std::shared_ptr<Coffee> sugarMilkCoffee = std::make_shared<SugarDecorator>(milkCoffee);

  std::cout << "Basic Coffee Cost: " << basicCoffee->cost() << std::endl;
  std::cout << "Milk Coffee Cost: " << milkCoffee->cost() << std::endl;
  std::cout << "Sugar Milk Coffee Cost: " << sugarMilkCoffee->cost() << std::endl;

  return 0;
}