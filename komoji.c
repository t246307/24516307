#include <stdio.h>

int main(void) {
    char small;
    char large;
    
    printf("アルファベットの小文字を入力してください:");
    scanf("%c",&small);
    
    if(small >= 'a' &&small <= 'z') {
        large = small - 32;
        printf("対応する大文字は%cです。\n", large);
    }

    return 0;
}