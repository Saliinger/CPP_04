#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
    _name = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal("Cat") {
    std::cout << "Cat copy constructor called" << std::endl;
    this->_name = src._name;
    this->_brain = new Brain(*src._brain); // Deep copy of the brain
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
    }
    return *this;
}

Cat::Cat(std::string name) : Animal("Cat") {
    std::cout << "Cat type constructor called" << std::endl;
    _name = name;
}

void Cat::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        std::cout << "Cat's idea at index " << index << ": " << _brain->getIdea(index) << std::endl;
    } else {
        std::cout << "Index out of range" << std::endl;
    }
}

void Cat::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100) {
        _brain->setIdea(index, idea);
    } else {
        std::cout << "Index out of range" << std::endl;
    }
}
