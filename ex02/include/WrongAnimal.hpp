#pragma once

#include <iostream>

class WrongAnimal {
    protected:
        std::string _type;
    public:
    // orthodox canonical form
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        virtual ~WrongAnimal(); // virtual destructor to be used in derived classes
        WrongAnimal &operator=(const WrongAnimal &src);

        // type constructor
        WrongAnimal(std::string type);
        std::string getType() const;
        virtual void makeSound() const; // virtual function to be overridden in derived classes
};
