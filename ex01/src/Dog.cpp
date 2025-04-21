#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
    _name = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal("Dog") {
    std::cout << "Dog copy constructor called" << std::endl;
    this->_name = src._name;
    this->_brain = new Brain(*src._brain); // Deep copy of the brain
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
    }
    return *this;
}

Dog::Dog(std::string name) : Animal("Dog") {
    std::cout << "Dog type constructor called" << std::endl;
    _name = name;
}

void Dog::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        std::cout << "Dog's idea at index " << index << ": " << _brain->getIdea(index) << std::endl;
    } else {
        std::cout << "Index out of range" << std::endl;
    }
}

void Dog::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100) {
        _brain->setIdea(index, idea);
    } else {
        std::cout << "Index out of range" << std::endl;
    }
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}