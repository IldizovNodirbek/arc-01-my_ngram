#include <stdio.h>
#include <stdlib.h>
#include "my_ngram.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s text [text2, text3, ...]\n", argv[0]);
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        count_characters(argv[i]);
    }
    return 0;
}



