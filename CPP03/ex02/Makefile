SRC		=	main.cpp\
			ClapTrap.cpp\
			FragTrap.cpp\
			ScavTrap.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	Fr4gTp

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