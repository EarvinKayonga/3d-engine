CC 	=	g++
NAME	=	Bin
RM	=	rm -f
SRC 	=	src/main.cpp		\
		src/Person/person.cpp	\
		src/Vector/vector.cpp

OBJ	=	$(SRC:%.cpp=%.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all
