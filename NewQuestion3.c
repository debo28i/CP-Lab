#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &target);

    int low = 0, high = n - 1, mid;
    int found = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == target) {
            found = mid;
            break;
        }
        else if (a[mid] < target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("%d\n", found);

    return 0;
}
