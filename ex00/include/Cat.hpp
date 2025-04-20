#ifndef CAT_HPP
#define CAT_HPP

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
};

#endif