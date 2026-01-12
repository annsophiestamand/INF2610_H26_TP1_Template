CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c11 -pthread -I../section1
TARGET  = section3

OBJ     = section3.o section1.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

section3.o: section3.c ../section1/section1.h
	$(CC) $(CFLAGS) -c section3.c -o section3.o

section1.o: ../section1/section1.c ../section1/section1.h
	$(CC) $(CFLAGS) -c ../section1/section1.c -o section1.o

run: all
	./$(TARGET) logs.txt logs_2.txt

clean:
	rm -f $(OBJ) $(TARGET) *.txt
