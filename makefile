CC = g++
TARGET = blackjack
SRC = src/main.cpp src/deck.cpp
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

install:
	install -m 755 $(TARGET) $(BINDIR)

clean:
	rm -f $(TARGET)

.PHONY: all clean install

