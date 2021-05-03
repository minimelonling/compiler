#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct entry{
    char id_name[10];
    char type[10];
    int addr;
    int line;
}entry;

typedef struct table{
    struct entry *stack[100];
    int scope_level;
    int top;
}table;

#endif /* COMMON_H */
