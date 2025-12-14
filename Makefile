CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -O2

TARGET := embedded_menu

all: $(TARGET)

$(TARGET): embedded_menu.c
	$(CC) $(CFLAGS) $< -o $(TARGET)

clean:
	-@rm -f $(TARGET) eeprom.bin
