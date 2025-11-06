#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_BOOKS 3
#define MAX_NAME_LEN 50

int main() {
    char *bookNames[NUM_BOOKS]; 
    char buffer[MAX_NAME_LEN];

    printf("Enter %d book names:\n", NUM_BOOKS);
    for (int i = 0; i < NUM_BOOKS; i++) {
        printf("Book %d: ", i + 1);
        fgets(buffer, MAX_NAME_LEN, stdin);
        buffer[strcspn(buffer, "\n")] = 0;

        bookNames[i] = (char *)malloc(strlen(buffer) + 1);
        if (bookNames[i] == NULL) {
            perror("Memory allocation failed");
            return 1;
        }
        strcpy(bookNames[i], buffer);
    }

    printf("\nEntered Book Names:\n");
    for (int i = 0; i < NUM_BOOKS; i++) {
        printf("%d. %s\n", i + 1, bookNames[i]);
    }

    // Free allocated memory
    for (int i = 0; i < NUM_BOOKS; i++) {
        free(bookNames[i]);
    }

    return 0;
}