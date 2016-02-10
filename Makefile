CC 	=	g++
NAME	=	Bin
RM	=	rm -f
SRC 	=	src/main.cpp		\
		src/Vector/vector.cpp	\
		src/Person/person.cpp	\
		src/Patch/patch.cpp

TESTFLS = 	tests/test.cpp		\
		tests/Person.cpp	\
		tests/Vector.cpp

OBJ	=	$(SRC:%.cpp=%.o)

TESTOBJ = 	$(TESTFLS:%.cpp=%.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

$(TNAME):	$(TESTOBJ)
		$(CC) $(TESTOBJ) -o $(TNAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ) $(TESTOBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all

test:		$(TNAME)

.PHONY: all test clean
