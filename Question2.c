#include <stdio.h>
int main() {
    int n, i;
    int patients[100];
    int max, min, maxHour;
    int count = 0;
    float sum = 0, average;

    printf("Enter number of hours: ");
    scanf("%d", &n);

    printf("Enter patient count for each hour:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &patients[i]);
        sum = sum + patients[i];
    }

    max = patients[0];
    min = patients[0];
    maxHour = 0;

    for (i = 0; i < n; i++) {

        if (patients[i] > max) {
            max = patients[i];
            maxHour = i;
        }

        if (patients[i] < min) {
            min = patients[i];
        }
    }

    average = sum / n;

    for (i = 0; i < n; i++) {
        if (patients[i] > average) {
            count++;
        }
    }

    printf("\nMaximum patients = %d", max);
    printf("\nHour of maximum patients = %d", maxHour + 1);
    printf("\nMinimum patients = %d", min);
    printf("\nPeak hour = %d", maxHour + 1);
    printf("\nAverage patients = %.2f", average);
    printf("\nHours above average = %d\n", count);

    return 0;
}
