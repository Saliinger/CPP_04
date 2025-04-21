#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : Animal("WrongCat") {
    std::cout << "WrongCat default constructor called" << std::endl;
    _name = "WrongCat";
    _brain= new Brain();
}

WrongCat::WrongCat(const WrongCat &src) : Animal("WrongCat") {
    std::cout << "WrongCat copy constructor called" << std::endl;
    _name = src._name;
    _brain = new Brain(*src._brain);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
    delete _brain;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &src) {
        _type = "WrongCat";
        _name = src._name;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

WrongCat::WrongCat(std::string name) : Animal("WrongCat") {
    std::cout << "WrongCat type constructor called" << std::endl;
    _name = name;
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow!" << std::endl;
}


void WrongCat::setIdea(int index, std::string const &src) {
    _brain->setIdea(index, src);
}

std::string WrongCat::getIdea(int index) const {
    return _brain->getIdea(index);
}