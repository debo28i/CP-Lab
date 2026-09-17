#include <stdio.h>

int main() {
    int n, i, threshold;
    float a[100], sum = 0, average;
    float lowest;
    int count = 0, position = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance threshold: ");
    scanf("%d", &threshold);

    printf("Enter attendance percentages:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    lowest = a[0];

    for (i = 0; i < n; i++) {

        if (a[i] < threshold) {
            count++;
        }

        if (a[i] < lowest) {
            lowest = a[i];
            position = i;
        }

        sum = sum + a[i];
    }

    average = sum / n;

    printf("\nStudents below threshold = %d", count);
    printf("\nLowest attendance = %.2f", lowest);
    printf("\nPosition = %d", position + 1);
    printf("\nAverage attendance = %.2f\n", average);

    return 0;
}
