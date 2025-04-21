#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : Animal("WrongCat") {
    std::cout << "WrongCat default constructor called" << std::endl;
    _name = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) : Animal("WrongCat") {
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->_name = src._name;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &src) {
        _type = "WrongCat";
        _name = src._name;
    }
    return *this;
}

WrongCat::WrongCat(std::string name) : Animal("WrongCat") {
    std::cout << "WrongCat type constructor called" << std::endl;
    _name = name;
}

void WrongCat::makeSound() {
    std::cout << "WrongMeow!" << std::endl;
}
