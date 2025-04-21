#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
    _name = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal("Dog") {
    std::cout << "Dog copy constructor called" << std::endl;
    _name = src._name;
    _brain = new Brain(*src._brain);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &src) {
        _type = "Dog";
        _name = src._name;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

Dog::Dog(std::string name) : Animal("Dog") {
    std::cout << "Dog type constructor called" << std::endl;
    _name = name;
}

void Dog::makeSound() const{
    std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int index, std::string  const &src) {
    _brain->setIdea(index, src);
}

std::string Dog::getIdea(int index) const {
    return _brain->getIdea(index);
}