#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
    _name = "Cat";
}

Cat::Cat(const Cat &src) : Animal("Cat") {
    std::cout << "Cat copy constructor called" << std::endl;
    this->_name = src._name;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &src) {
        _type = "Cat";
        _name = src._name;
    }
    return *this;
}

Cat::Cat(std::string name) : Animal("Cat") {
    std::cout << "Cat type constructor called" << std::endl;
    _name = name;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}