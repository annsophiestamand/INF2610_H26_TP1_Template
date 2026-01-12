CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c11 -DTEST_SECTION1
TARGET  = section1
SRC     = section1.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET) *.txt
