#include <stdio.h>

int sum_array(const int *values, size_t count) {
    int total = 0;
    for (size_t i = 0; i < count; ++i) {
        total += values[i];
    }
    return total;
}

int main(void) {
    int values[] = {10, 20, 30, 40, 50, 60, 70};
    size_t count = sizeof values / sizeof values[0];

    printf("Array has %zu elements:\n", count);
    for (size_t i = 0; i < count; ++i) {
        printf("values[%zu] = %d\n", i, values[i]);
    }

    int total = sum_array(values, count);
    printf("Sum = %d\n", total);

    return 0;
}
