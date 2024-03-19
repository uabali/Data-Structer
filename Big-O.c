#include <stdio.h>
#include <string.h>

void findNemo1(char **array) {
    if (strcmp(array[0], "nemo") == 0) {
        printf("Found NEMO!\n");
    }
}

int main() {
    char *nemo[] = {"nemo"};
    findNemo1(nemo);

    return 0;
}
