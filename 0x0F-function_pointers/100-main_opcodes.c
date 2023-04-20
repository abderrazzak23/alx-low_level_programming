#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check that there is exactly one command-line argument
    if (argc != 2) {
        printf("Error\n");
        exit(1);
    }

    // Convert the command-line argument to an integer
    int nbytes = atoi(argv[1]);

    // Check that the integer is non-negative
    if (nbytes < 0) {
        printf("Error\n");
        exit(2);
    }

    // Treat the address of the main function as a character pointer
    char *opc = (char *) main;

    // Print the hexadecimal representation of the memory bytes
    for (int i = 0; i < nbytes; i++) {
        printf("%02x", opc[i] & 0xFF);
        if (i != nbytes - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}

