#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
#include "record.h"
#include "node.h"

int main(void) {
    // --- 1. Array and sum_array ---
    int arr[] = {4, 7, 1, 9, 3};
    size_t len = sizeof arr / sizeof arr[0];
    printf("Array sum = %d\n", sum_array(arr, len));

    // --- 2. Struct Record on stack (accessed via pointer) ---
    Record r = { .id = 10, .value = 3.14 };
    Record *record_ptr = &r;
    record_ptr->id = 20;
    record_ptr->value = 6.28;
    printf("Record: id=%d, value=%.2f\n", record_ptr->id, record_ptr->value);

    // --- 3. Dynamically allocated Record ---
    Record *dyn_rec = malloc(sizeof *dyn_rec);
    if (dyn_rec == nullptr) {
        fputs("memory allocation failed for Record\n", stderr);
        return EXIT_FAILURE;
    }
    dyn_rec->id = 1;
    dyn_rec->value = 42.5;
    printf("Dynamic record: id=%d, value=%.1f\n", dyn_rec->id, dyn_rec->value);
    free(dyn_rec);

    // --- 4. Dynamically allocated Node (self-referential) ---
    Node *node = malloc(sizeof *node);
    if (node == nullptr) {
        fputs("memory allocation failed for Node\n", stderr);
        return EXIT_FAILURE;
    }
    node->value = 100;
    node->next = nullptr;
    printf("Node: value=%d, next=%p\n", node->value, (void *)node->next);
    free(node);

    return EXIT_SUCCESS;
}
