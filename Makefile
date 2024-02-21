all : $(TARGET)
$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ)


$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)


clean:
	rm -f *.o

	rm -f $(TARGET)


re: fclean all
