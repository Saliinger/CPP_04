#include <iostream>
#include "./include/Animal.hpp"
#include "./include/Cat.hpp"
#include "./include/Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // const Animal* test = new Animal();
    delete j;
    delete i;
    // delete test;
    return 0;
}