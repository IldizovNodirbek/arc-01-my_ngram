#include "my_ngram.h"
#include <stdio.h>

void count_characters(const char* text) {
    int counts[256] = {0};  
    
    for (int i = 0; text[i] != '\0'; i++) {
        counts[(unsigned char)text[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            printf("%c:%d\n", i, counts[i]);
        }
    }
}




