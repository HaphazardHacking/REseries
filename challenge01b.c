#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {

    if (argc != 2) {
        printf("Requires one argument.\n");
        return -1;
    }

    char* correct = "b'adp4s!s";

    if (strncmp(argv[1], correct, strlen(correct))) {
        printf("Sorry, %s is incorrect.\n", argv[1]);
        return 1;
    } else {
        printf("Well done, %s is correct!\n", argv[1]);
        return 0;
    }

}
