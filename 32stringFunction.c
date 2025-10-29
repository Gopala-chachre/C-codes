#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "Hello, World!";
    int length = strlen(str1);
    printf("Length of the string: %d\n", length);

    char str2;
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    char str3[] = "Hello ";
    char str4[] = "World!";
    strcat(str3, str4);
    printf("Concatenated string: %s\n", str3);

    char str5[] = "Apple";
    char str6[] = "Applet";
    int result = strcmp(str5, str6);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("str5 is lexicographically smaller than str6.\n");
    } else {
        printf("str5 is lexicographically greater than str6.\n");
    }

    char str7[] = "This is a test string for testing";
    char *pos = strstr(str7, "test");
    if (pos) {
        printf("Substring 'test' found at: %s\n", pos);
    } else {
        printf("Substring not found.\n");
    }

    char str8[] = "Working";
    char str9[] = "working";
    int cmp_result = strncasecmp(str8, str9, 3);
    if (cmp_result == 0) {
        printf("First 3 characters of the strings are equal (case-insensitive).\n");
    } else {
        printf("First 3 characters of the strings are different (case-insensitive).\n");
    }

    return 0;
}   