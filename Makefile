CC= gcc
FLAGS = -w 
SRC = ./src/*.c
HEADERS = ./header/*.h
OBJ = $(SRC:.c=.o)
$(OBJ): $(SRC) $(HEADERS)
	$(CC) -c $(SRC)

makelib: clean $(OBJ)
	ar -rcs CompSqLib.a CompSq.o

makeunittestsuite: makelib
	$(CC) $(FLAGS) CUnitTest.c -I/usr/include/cunit -L. CompSq.o -o runtest -lcunit
clean:
	rm -rf *.o *.a
