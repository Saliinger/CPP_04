#pragma once

#include <iostream>

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &src);
        ~Brain();

        void setIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
};
