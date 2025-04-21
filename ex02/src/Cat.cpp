#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
    _name = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal("Cat") {
    std::cout << "Cat copy constructor called" << std::endl;
    _name = src._name;
    _brain = new Brain(*src._brain);
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &src) {
        _type = "Cat";
        _name = src._name;
        _brain = new Brain(*src._brain);
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

void Cat::setIdea(int index, std::string const &src) {
    _brain->setIdea(index, src);
}

std::string Cat::getIdea(int index) const {
    return _brain->getIdea(index);
}