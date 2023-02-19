//
// Created by archveragejoe on 2/19/23.
//

#ifndef TOKENTEST_COPYSAFESTRTOK_H
#define TOKENTEST_COPYSAFESTRTOK_H

#include "my_strpbrk.h"

#define NULL 0

char* my_strtok(char* str, const char* delim) {
    // us static thread_local char* to be thread safe
    static char* p = NULL;
    if (str != NULL) {
        p = str;
    } else if (p == NULL) {
        return NULL;
    }
    char* start = p;
    char* end = my_strpbrk(start, delim);
    if (end != NULL) {
        *end = '\0';
        p = end + 1;
    } else {
        p = NULL;
    }
    return start;
}

#endif //TOKENTEST_COPYSAFESTRTOK_H
