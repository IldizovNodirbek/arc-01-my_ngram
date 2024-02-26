TARGET = my_ngram
OBJ = my_ngram.o
SRC = my_ngram.c
CFLAGS = -Wall -Wextra -Werror
CC = gcc

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) 


clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(TARGET) *.exe

re: clean all


.PHONY: all clean fclean re