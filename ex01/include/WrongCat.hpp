#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class WrongCat : public Animal {
    private:
        std::string _name;
        Brain *_brain;
    public:
        // orthodox canonical form
        WrongCat();
        WrongCat(const WrongCat &src);
        ~WrongCat();
        WrongCat &operator=(const WrongCat &src);

        // type constructor
        WrongCat(std::string name);

        // functions
        void makeSound() const;
        void setIdea(int index, std::string const &src);
        std::string getIdea(int index) const;
};
