#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        std::string _name;
        Brain *_brain;
    public:
        // orthodox canonical form
        Dog();
        Dog(const Dog &src);
        ~Dog();
        Dog &operator=(const Dog &src);

        // name constructor
        Dog(std::string name);

        // functions
        void makeSound() const;
        void setIdea(int index, std::string const &src);
        std::string getIdea(int index) const;
};
