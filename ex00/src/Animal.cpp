#include "../include/Animal.hpp"

// orthodox canonical form
Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
    _type = "Animal";
}

Animal::Animal(const Animal &src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &src) {
        _type = src._type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

// type constructor
Animal::Animal(std::string type) {
    std::cout << "Animal type constructor called" << std::endl;
    _type = type;
}
