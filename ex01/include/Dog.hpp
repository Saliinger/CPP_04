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

        // getters and setters
        void getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
        virtual void makeSound() const;
};
