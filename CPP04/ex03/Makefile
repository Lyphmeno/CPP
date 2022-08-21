SRC		=	main.cpp\
			AMateria.cpp\
			ICharacter.cpp\
			Character.cpp\
			Cure.cpp\
			Ice.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	AMateria

.PHONY:	all
all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) $(FLAGS) -o $(NAME)

.PHONY:	clean
clean:
			$(RM) $(OBJ)

.PHONY:	fclean
fclean:		clean
			$(RM) $(NAME)

.PHONY:	re
re:			fclean all