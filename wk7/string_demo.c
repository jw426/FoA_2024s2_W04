#include <stdio.h>

#define TEST1 0
#define TEST2 0

int main(int argc, char** argv) {

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", greeting);

    char string1[] = "This is a string with a null byte implicit at the end";
    printf("%s\n", string1);

    string1[16] = '\0';
    printf("%s\n", string1);

    char* string2 = "Another notation for string! [] => *";
    printf("%s\n", string2);

    #if TEST1
    string2[0] = 'a';
    printf("%s\n", string2);
    #endif

    #if TEST2
    char greeting_error[3] = {'f','o','a'};
    printf("greeting_error: %s\n", greeting_error);
    #endif

    return 0;
}