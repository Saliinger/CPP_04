#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    private:
        std::string _name;
    public:
        // orthodox canonical form
        Dog();
        Dog(const Dog &src);
        ~Dog();
        Dog &operator=(const Dog &src);

        // name constructor
        Dog(std::string name);
};

#endif