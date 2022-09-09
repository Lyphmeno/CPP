NAME	=	ExeForm
SRC		=	$(shell find . -type f -name "*.cpp")
HEADERS	=	$(shell find . -type f -name "*.hpp")
TODEL	=	$(shell find . -type f -name "*_shrubbery")
OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:	all
all:		$(NAME)

$(NAME):	$(OBJ) $(HEADERS) Makefile
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

.PHONY:	clean
clean:
			@$(RM) $(OBJ) $(TODEL)

.PHONY:	fclean
fclean:		clean
			@$(RM) $(NAME)

.PHONY:	re
re:			fclean all