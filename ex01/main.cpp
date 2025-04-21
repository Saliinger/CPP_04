#include "./include/Cat.hpp"
#include "./include/Dog.hpp"

int main()
{
    std::cout << "--- Test de creation et destruction de Dog et Cat ---" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    delete dog; // Doit appeler le destructeur de Dog et de son Brain
    delete cat; // Doit appeler le destructeur de Cat et de son Brain

    std::cout << "\n--- Test avec un tableau d'Animal ---" << std::endl;
    const int size = 6;
    const Animal* animals[size];

    for (int i = 0; i < size; ++i)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i)
        delete animals[i]; // Doit appeler les destructeurs dans le bon ordre

    std::cout << "\n--- Test de copie profonde ---" << std::endl;
    Dog dog1;
    dog1.setIdea(0, "Chase the ball");
    dog1.setIdea(1, "Bark at the mailman");

    Dog dog2 = dog1; // Copie profonde

    std::cout << "Dog1's ideas:" << std::endl;
    dog1.getIdea(0);

    std::cout << "Dog2's ideas (copied from Dog1):" << std::endl;
    dog2.getIdea(0);

    dog2.setIdea(1, "Sleep in the sun");
    
    std::cout << "After modifying Dog2's ideas:" << std::endl;
    std::cout << "Dog1's ideas:" << std::endl;
    dog1.getIdea(0);
    std::cout << "Dog2's ideas:" << std::endl;
    dog2.getIdea(0);

    std::cout << "\n--- Test de fuite de memoire ---" << std::endl;
    {
        Dog* tempDog = new Dog();
        tempDog->setIdea(0, "Temporary dog idea");
        tempDog->getIdea(0);
        delete tempDog; // Pas de fuite ici
    }

    std::cout << "\n--- Tests termines ---" << std::endl;
    return 0;
}