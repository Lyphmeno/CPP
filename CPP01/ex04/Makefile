SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	replace

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