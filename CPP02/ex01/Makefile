SRC		=	main.cpp\
			Fixed.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	fixedPoint

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