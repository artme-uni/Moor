#include "moor.h"

void alphabet(int *alp, char *templ) {

    int i;
    int tplen = strlen(templ);

    for (i = 0; i < 256; i++)
        alp[i] = tplen;

    for (i = 0; i < tplen - 1; i++) {
        alp[templ[i]] = tplen - i - 1;
    }
}

int moore(char *str, char *pattern, int *alphabet) {
    int tplen = strlen(pattern);
    int strl = strlen(str);
    int i = tplen - 1;

    if (tplen > strl) {
        printf("bad input: tplen > strl");
        return -1;
    }

    int j, l;

    do {
        j = tplen - 1;
        l = i;

        while (j >= 0 && pattern[j] == str[l]) {
            j--;
            l--;
        }

        if (j < 0)
            break;

        i = i + alphabet[str[i]];

    } while (i < strl);

    if (j >= 0) {
        return -1;
    } else {
        return (l + 2);
    }
}

void fileTo(char *file, char *array) {
    FILE *fi;

    fi = fopen(file, "r");

    fgets(array, 500, fi);
}