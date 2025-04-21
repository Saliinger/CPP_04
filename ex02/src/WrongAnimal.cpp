#include "../include/WrongAnimal.hpp"

// orthodox canonical form
WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &src) {
        _type = src._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

// type constructor
WrongAnimal::WrongAnimal(std::string type) {
    std::cout << "WrongAnimal type constructor called" << std::endl;
    _type = type;
}

std::string WrongAnimal::getType() const {
    return _type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}