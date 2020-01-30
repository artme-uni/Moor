#ifndef MOOR_MOOR_H
#define MOOR_MOOR_H

#include <stdio.h>
#include <string.h>

void alphabet(int *alp, char *templ);

int moore(char *str, char *pattern, int *alphabet);

void fileTo(char *file, char *array);

#endif //MOOR_MOOR_H
