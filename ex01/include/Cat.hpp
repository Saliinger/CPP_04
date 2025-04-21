#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        std::string _name;
        Brain *_brain;
    public:
        // orthodox canonical form
        Cat();
        Cat(const Cat &src);
        ~Cat();
        Cat &operator=(const Cat &src);

        // type constructor
        Cat(std::string type);

            // Setters and Getters
        void setIdea(int index, const std::string &idea);
        void getIdea(int index) const;
    };
