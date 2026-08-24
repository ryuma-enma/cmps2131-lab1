#include <stdio.h>

int main(void) {
    int score = 10;
    int *score_ptr = &score;

    printf("score = %d\n", score);
    printf("address stored in score_ptr = %p\n", (void *)score_ptr);
    printf("value reached through score_ptr = %d\n", *score_ptr);

    // Change score through the pointer
    *score_ptr = 25;
    printf("score after writing through pointer = %d\n", score);

    return 0;
}
