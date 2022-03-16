#include<stdio.h>

int main(void) {
    char alpha[26], c = 'a';

    int i;
    for (i = 0; i < 26; i++,c++)
        alpha[i] = c;

    for(i=0;i<26;i++)
        printf("%c ",alpha[i]);

    return 0;
}
