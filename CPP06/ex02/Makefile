NAME	=	Base
SRC		=	$(shell find . -type f -name "*.cpp")
HEADERS	=	$(shell find . -type f -name "*.hpp")
OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:	all
all:		$(NAME)

%.o:%.cpp
			@echo -ne '    \033c$(E_BAR)\n'
			$(CC) $(FLAGS) -g -c -o $@ $< $c 
			@$(eval $(call update_bar))

$(NAME):	$(OBJ) $(HEADERS) Makefile
			@echo -ne '    \033c$(E_BAR)\n'
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			@$(eval $(call update_bar))

.PHONY:	clean
clean:
			@$(RM) $(OBJ)

.PHONY:	fclean
fclean:		clean
			@$(RM) $(NAME)

.PHONY:	re
re:			fclean all


#  ---------- PROGRESS BAR ----------
_STOP		=	\e[0m
_PINK		=	\033[38;5;223m\e[1m
_ORANGE		=	\033[38;5;209m\e[1m
_CREAM		=	\033[38;5;${VAL}m\e[1m
VAL			=	76
INDEX		=	2
BUILD_SIZE	=	$(shell find . -type f -name "*.cpp"  | wc -l)
PRC			=	0
progress	=	0

define update_bar =
    progress	=	$(shell echo "$(INDEX) / ($(BUILD_SIZE) / 20)" | bc -l)
    E_BAR		=	$(_PINK)-->$(_ORANGE)[$(_STOP)$(_CREAM)$(shell python -c 'print("█" * int($(progress)))')$(shell python -c 'print(" " * (20 - int($(progress))))')$(_ORANGE)]$(_PINK)<--$(_ORANGE)[$(_CREAM)$(shell echo $(PRC) / 1 | bc)%$(_ORANGE)]$(_STOP)
	INDEX		=	$(shell echo $(INDEX) + 1 | bc -l)
	PRC			=	$(shell echo "$(INDEX) / $(BUILD_SIZE) * 100" | bc -l)
	ifeq ($(shell echo $(progress) % 9 | bc -l), 0)
		VAL=$(shell echo $(VAL) + 1 | bc -l)
	endif
endef
#  ---------- PROGRESS BAR ----------
