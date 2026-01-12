CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c11 -I../section1
TARGET  = section2

OBJ     = section2.o section1.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

section2.o: section2.c ../section1/section1.h
	$(CC) $(CFLAGS) -c section2.c -o section2.o

section1.o: ../section1/section1.c ../section1/section1.h
	$(CC) $(CFLAGS) -c ../section1/section1.c -o section1.o

run: all
	./$(TARGET) logs.txt logs_2.txt

clean:
	rm -f $(OBJ) $(TARGET) *.txt