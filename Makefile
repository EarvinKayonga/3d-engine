CC 	=	g++
CFLAGS 	=	-W -Wall -Werror -Wextra -g
NAME	=	Bin
RM	=	rm -f
SRC 	=	src/main.cpp		\
		src/Vector/vector.cpp	\
		src/Person/person.cpp	\
		src/Patch/patch.cpp

OBJ	=	$(SRC:%.cpp=%.o)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean run
