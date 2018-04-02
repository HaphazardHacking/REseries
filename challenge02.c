#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {

    if (argc != 2) {
        printf("Requires one argument.\n");
        return -1;
    }

    char* correct = "password1";
    // o`rrvnqc0 - rot1

    int i = 0;
    while(correct[i] != 0 && argv[1][i] != 0) {
        if (correct[i] - 1 != argv[1][i]) {
            printf("Sorry, %s is incorrect.\n", argv[1]);
            return 1;
        }
        i++;
    }

    printf("Well done, %s is correct!\n", argv[1]);
    return 0;

}
