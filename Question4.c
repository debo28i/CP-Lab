
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char code[20];
    int i, valid = 1;

    printf("Enter book code: ");
    scanf("%s", code);

    if (strlen(code) != 12) {
        valid = 0;
    }

    for (i = 0; i < 3; i++) {
        if (code[i] < 'A' || code[i] > 'Z') {
            valid = 0;
        }
    }

    if (code[3] != '-') {
        valid = 0;
    }

    for (i = 4; i < 8; i++) {
        if (code[i] < '0' || code[i] > '9') {
            valid = 0;
        }
    }

    if (code[8] != '-') {
        valid = 0;
    }

    for (i = 9; i < 12; i++) {
        if (code[i] < '0' || code[i] > '9') {
            valid = 0;
        }
    }

    if (valid == 1) {
        printf("Valid book code\n");
    } else {
        printf("Invalid book code\n");
    }

    return 0;
}
