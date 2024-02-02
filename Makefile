CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = character_count
SRCS = main.c my_ngram.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
  $(CC) $(CFLAGS) -o $@ $^

%.o: %.c my_ngram.h
  $(CC) $(CFLAGS) -c $<

clean:
  rm -f $(TARGET) $(OBJS)
