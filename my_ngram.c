#include <stdio.h>
#include <stdlib.h>

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


#include <stdio.h>

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
