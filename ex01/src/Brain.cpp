#include "../include/Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = src._ideas[i];
    }
}

Brain &Brain::operator=(const Brain &src) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &src) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return _ideas[index];
    } else {
        std::cout << "Index out of range" << std::endl;
        return "";
    }
}
void Brain::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100) {
        _ideas[index] = idea;
    } else {
        std::cout << "Index out of range" << std::endl;
    }
}