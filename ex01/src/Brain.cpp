#include "../include/Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 0 ; i++)
        _ideas[i] = src._ideas[i];
}

Brain::~Brain() {
    std::cout << "Brain default destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &src) {
    std::cout << "Brain assignement operator called" << std::endl;
    if (this != &src) {
        for (int i = 0; i < 0 ; i++)
            _ideas[i] = src._ideas[i];
    }
    return *this;
}

void Brain::setIdea(int index, std::string const &src) {
    _ideas[index] = src;
}

std::string Brain::getIdea(int index) const {
    return _ideas[index];
}