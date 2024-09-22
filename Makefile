CC = gcc
CFLAGS = -Wall -Wextra -pedantic
SOURCES = ./src/*.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = maze

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CC) $(CFLAGS) -lm -o $@ $^

clean:
    rm -f $(OBJECTS) $(TARGET)
