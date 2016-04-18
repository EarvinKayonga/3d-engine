CC 	=	g++
CFLAGS 	=	-W -Wall -Werror -Wextra -Weffc++ -pedantic -g
NAME	=	Bin
RM	=	rm -f
SRC 	=	src/main.cpp		\
		src/Vector/vector.cpp	\
		src/Person/person.cpp	\
		src/Patch/patch.cpp

OBJ	=	$(SRC:%.cpp=%.o)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "Build successful!"

all:		$(NAME)

clean:
		$(RM) $(OBJ)
		@echo "Removed *.o!"

fclean:			clean
		$(RM) $(NAME)
		@echo "Removed all binaries!"

re:		fclean all

.PHONY: all clean run
