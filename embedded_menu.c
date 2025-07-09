#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>  // For sleep()

// ------------------ Function Declarations ------------------ //
void trafficLight();
void passwordLock();
void ledPattern();
void stopwatch();
void uartSimulation();
void portControl();
void eepromSimulation();

void menu() {
    printf("\n===== Embedded System Simulation Menu =====\n");
    printf("1. Traffic Light Simulation\n");
    printf("2. Password Protected Lock\n");
    printf("3. LED Pattern Generator\n");
    printf("4. Stopwatch Timer\n");
    printf("5. UART Communication Simulation\n");
    printf("6. Bitwise Port Control\n");
    printf("7. EEPROM File Simulation\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

// ------------------ Main Program ------------------ //
int main() {
    int choice;

    while (1) {
        menu();
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer

        switch (choice) {
            case 1: trafficLight(); break;
            case 2: passwordLock(); break;
            case 3: ledPattern(); break;
            case 4: stopwatch(); break;
            case 5: uartSimulation(); break;
            case 6: portControl(); break;
            case 7: eepromSimulation(); break;
            case 0: printf("Exiting...\n"); exit(0);
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}

// ------------------ Project Functions ------------------ //

void trafficLight() {
    enum State {RED, GREEN, YELLOW};
    enum State light = RED;

    for (int i = 0; i < 3; i++) {
        switch (light) {
            case RED:
                printf("RED Light ON\n");
                sleep(2);
                light = GREEN;
                break;
            case GREEN:
                printf("GREEN Light ON\n");
                sleep(2);
                light = YELLOW;
                break;
            case YELLOW:
                printf("YELLOW Light ON\n");
                sleep(1);
                light = RED;
                break;
        }
    }
}

void passwordLock() {
    char password[20];
    int attempts = 3;

    while (attempts--) {
        printf("Enter Password: ");
        scanf("%s", password);
        if (strcmp(password, "1234") == 0) {
            printf("Access Granted\n");
            return;
        } else {
            printf("Wrong Password. Attempts left: %d\n", attempts);
        }
    }
    printf("System Locked\n");
}

void ledPattern() {
    unsigned char pattern = 0xAA; // 10101010
    for (int i = 0; i < 5; i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%c ", (pattern & (1 << j)) ? '*' : '_');
        }
        printf("\n");
        pattern = ~pattern;
        sleep(1);
    }
}

void stopwatch() {
    int seconds = 0;
    while (seconds < 10) {
        printf("Time: %d seconds\n", seconds++);
        sleep(1);
    }
}

void uartSimulation() {
    char ch;
    printf("Enter a character to send: ");
    ch = getchar();
    printf("UART Received: %c\n", ch);
}

void portControl() {
    unsigned char port = 0x00;
    printf("Initial PORT: 0x%X\n", port);
    
    port |= (1 << 2); // Set bit 2
    printf("Set bit 2: 0x%X\n", port);

    port ^= (1 << 3); // Toggle bit 3
    printf("Toggle bit 3: 0x%X\n", port);

    port &= ~(1 << 2); // Clear bit 2
    printf("Clear bit 2: 0x%X\n", port);
}

void eepromSimulation() {
    FILE *eeprom;
    int value = 99;

    // Write to EEPROM
    eeprom = fopen("eeprom.bin", "wb");
    fwrite(&value, sizeof(int), 1, eeprom);
    fclose(eeprom);

    // Read from EEPROM
    int read_val;
    eeprom = fopen("eeprom.bin", "rb");
    fread(&read_val, sizeof(int), 1, eeprom);
    fclose(eeprom);

    printf("EEPROM Stored Value: %d\n", read_val);
}
