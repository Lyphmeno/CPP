SRC		=	main.cpp\
			ClapTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp\
			ScavTrap.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	Di4mondTp

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