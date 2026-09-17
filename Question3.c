#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, i, choice, found = 0;
    char names[100][50];
    char search[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student names:\n");

    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter name to search: ");
    scanf("%s", search);

    printf("\n1. Case-sensitive search");
    printf("\n2. Case-insensitive search");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    for (i = 0; i < n; i++) {

        if (choice == 1) {
            if (strcmp(names[i], search) == 0) {
                found = 1;
                printf("Student found at position %d\n", i + 1);
            }
        }

        else if (choice == 2) {
            if (strcasecmp(names[i], search) == 0) {
                found = 1;
                printf("Student found at position %d\n", i + 1);
            }
        }
    }

    if (found == 0) {
        printf("Student not found\n");
    }

    return 0;
}
