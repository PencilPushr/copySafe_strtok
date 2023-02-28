//
// Created by archveragejoe on 2/19/23.
//

#ifndef TOKENTEST_MY_STRPBRK_H
#define TOKENTEST_MY_STRPBRK_H

#define NULL 0

char* my_strpbrk(const char* str, const char* charset) {
    const char* s;
    const char* c;
    for (s = str; *s != '\0'; s++) {
        for (c = charset; *c != '\0'; c++) {
            if (*s == *c) {
                return (char*)s;
            }
        }
    }
    return NULL;
}

#endif //TOKENTEST_MY_STRPBRK_H
