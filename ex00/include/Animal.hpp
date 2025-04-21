#pragma once

#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
    // orthodox canonical form
        Animal();
        Animal(const Animal &src);
        virtual ~Animal(); // virtual destructor to be used in derived classes
        Animal &operator=(const Animal &src);

        // type constructor
        Animal(std::string type);
        std::string getType() const;
        virtual void makeSound() const; // virtual function to be overridden in derived classes
};
