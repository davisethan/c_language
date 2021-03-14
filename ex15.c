#include <stdio.h>

// Pointers

int main(int argc, char *argv[]) {
    // Create two arrays
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa" };

    // Safely get size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // 1st way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    // Setup pointers to the start of arrays
    int *cur_age = ages;
    char **cur_name = names;

    // 2dn way using pointers
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    // 3rd way pointers are just arrays
    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");

    // 4th way with pointers complex
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years for far.\n", *cur_name, *cur_age);
    }

    return 0;
}
