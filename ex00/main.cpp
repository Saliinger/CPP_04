#include <iostream>
#include "./include/Animal.hpp"
#include "./include/Cat.hpp"
#include "./include/Dog.hpp"
#include "./include/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();
    const WrongAnimal* wonton = new WrongAnimal();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wrong->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    wrong->makeSound();
    wonton->makeSound();
    delete meta;
    delete j;
    delete i;
    delete wrong;
    delete wonton;
    return 0;
}