#include <stdio.h>

bool is_even(int value) {
    return value % 2 == 0;
}

int square(int value) {
    return value * value;
}

int main(void) {
    for (int i = 1; i <= 10; ++i) {
        printf("%d is %s, square = %d\n", i,
               is_even(i) ? "even" : "odd",
               square(i));
    }
    return 0;
}
