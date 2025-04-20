#ifndef AMINAL_HPP
#define AMINAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
    // orthodox canonical form
        Animal();
        Animal(const Animal &src);
        ~Animal();
        Animal &operator=(const Animal &src);

        // type constructor
        Animal(std::string type);
};

#endif