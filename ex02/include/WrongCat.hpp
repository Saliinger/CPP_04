#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
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
