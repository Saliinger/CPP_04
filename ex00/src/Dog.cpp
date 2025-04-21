#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
    _name = "Dog";
}

Dog::Dog(const Dog &src) : Animal("Dog") {
    std::cout << "Dog copy constructor called" << std::endl;
    this->_name = src._name;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &src) {
        _type = "Dog";
        _name = src._name;
    }
    return *this;
}

Dog::Dog(std::string name) : Animal("Dog") {
    std::cout << "Dog type constructor called" << std::endl;
    _name = name;
}

void Dog::makeSound() {
    std::cout << "Woof!" << std::endl;
}
