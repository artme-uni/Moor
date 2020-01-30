#include "moor.h"

int main(int argc, char *argv[]) {

    int alph[256];
    alphabet(alph, argv[2]);

    char file[500];
    fileTo(argv[1], file);

    printf("%d\n", moore(file, argv[2], alph));

    return 0;
}