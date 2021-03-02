# include <stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Zed";
    char full_name[] = { 'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0' };

    // Warning: Some systems need %ld as %u since unsigned int
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of areas (int[]): %ld\n", sizeof(areas));
    printf("Number of integers in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("First area %d, Second area %d.\n", areas[0], areas[1]);

    printf("Size of char: %ld\n", sizeof(char));
    printf("Size of name (char[]): %ld\n", sizeof(name));
    printf("Number of characters in name: %ld\n", sizeof(name) / sizeof(char));

    printf("Size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("Number of characters in full_name: %ld\n", sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
