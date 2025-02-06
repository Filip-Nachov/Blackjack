CC = g++
TARGET = blackjack
SRC = src/main.cpp
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

install:
	install -m 755 $(TARGET) $(BINDIR)

clean:
	rm -f $(TARGET)

.PHONY: all clean install

