// C++ Implementation
#include <iostream>
#include <string>
#include <memory>

class Animal {
public:
    virtual std::string speak() = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    std::string speak() override {
        return "Woof!";
    }
};

class Cat : public Animal {
public:
    std::string speak() override {
        return "Meow!";
    }
};

class AnimalFactory {
public:
    std::unique_ptr<Animal> create_animal(const std::string& animal_type) {
        if (animal_type == "dog") {
            return std::make_unique<Dog>();
        } else if (animal_type == "cat") {
            return std::make_unique<Cat>();
        }
        return nullptr;
    }
};

// Example usage
int main() {
    AnimalFactory factory;
    auto dog = factory.create_animal("dog");
    auto cat = factory.create_animal("cat");
    
    std::cout << "Dog says: " << dog->speak() << std::endl;
    std::cout << "Cat says: " << cat->speak() << std::endl;
    
    return 0;
}