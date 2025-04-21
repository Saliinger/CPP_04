NAME = Fire
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g3

SRC =	main.cpp \
		./src/Animal.cpp \
		./src/Cat.cpp \
		./src/Dog.cpp \
		./src/WrongAnimal.cpp \
		./src/WrongCat.cpp \
		./src/Brain.cpp \
		

OBJ	=	$(SRC:.cpp=.o)

.phony: all re clean fclean

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:		%.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all