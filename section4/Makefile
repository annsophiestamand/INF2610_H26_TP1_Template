CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c11 -pthread

TARGET  = section4
SRC     = section4.c incidents.c
OBJ     = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c section4.h
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)