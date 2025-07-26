# Makefile

CC 		= g++
CFLAGS 	= -g -Wall -Wunused-value
LDFLAGS = -lm
TARGET = $(NAME).a

$(TARGET):
	$(CC) $(CFLAGS) $(NAME).cpp $(LDFLAGS) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)