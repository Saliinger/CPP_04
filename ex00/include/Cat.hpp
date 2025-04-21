#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    private:
        std::string _name;
    public:
        // orthodox canonical form
        Cat();
        Cat(const Cat &src);
        ~Cat();
        Cat &operator=(const Cat &src);

        // type constructor
        Cat(std::string type);
        void makeSound() const;
};
