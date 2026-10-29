
#include <stdio.h>

#define SIZE 20011

struct Entry {
    int key;
    int index;
    int used;
};

struct Entry table[SIZE];

int hash(int key) {
    int h = key % SIZE;
    if (h < 0)
        h += SIZE;
    return h;
}

int find(int key) {
    int h = hash(key);

    while (table[h].used) {
        if (table[h].key == key)
            return table[h].index;

        h = (h + 1) % SIZE;
    }

    return -1;
}

void insert(int key, int index) {
    int h = hash(key);

    while (table[h].used)
        h = (h + 1) % SIZE;

    table[h].key = key;
    table[h].index = index;
    table[h].used = 1;
}

int main() {
    int n, target;
    int a[10000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        int complement = target - a[i];
        int j = find(complement);

        if (j != -1) {
            printf("[%d, %d]\n", j, i);
            return 0;
        }

        insert(a[i], i);
    }

    return 0;
}
