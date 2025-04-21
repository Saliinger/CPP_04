#pragma once

#include <iostream>

class Brain {
    protected:
        std::string _ideas[100];
    public:
        // orthodox cannonical form
        Brain();
        Brain(Brain const &src);
        virtual ~Brain();
        Brain &operator=(Brain const &src);

        // functions
        void setIdea(int index, std::string const &src);
        std::string getIdea(int index) const;
};