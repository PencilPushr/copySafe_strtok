#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "copySafeStrTok.h"


int main() {
    char str[] = "2500022,COMPUTER SCIENCE (3 YR),,,,42,,,43,30,49,40,32,41,,,";

    size_t size = 17;
    char** line = (char**)calloc(17, sizeof(char*));

    char* token = my_strtok(str, ",");
    int i = 0;
    while (token != NULL && i < 17) {
        line[i++] = token;
        token = my_strtok(NULL, ",");
    }
    // do stuff with the tokens
    for (int j = 0; j < i; ++j) {
        std::cout << line[j] << std::endl;
    }
    free(line);
    return 0;
}

