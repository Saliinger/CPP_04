#pragma once

#include <iostream>
#include "Animal.hpp"

class WrongCat : public Animal {
    private:
        std::string _name;
    public:
        // orthodox canonical form
        WrongCat();
        WrongCat(const WrongCat &src);
        ~WrongCat();
        WrongCat &operator=(const WrongCat &src);

        // type constructor
        WrongCat(std::string name);
        void makeSound() const;
};
