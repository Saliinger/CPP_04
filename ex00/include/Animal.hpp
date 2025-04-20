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
        virtual ~Animal();
        Animal &operator=(const Animal &src);

        // type constructor
        Animal(std::string type);
        void makeSound() const;
        std::string getType() const;
};

#endif