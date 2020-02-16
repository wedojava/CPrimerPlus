#include <stdio.h>
#include <string.h>

int main(void) {
    char word[100] = "";
    printf("Please input a word: ");
    scanf("%s", word);
    for (int i = strlen(word); i >= 0; --i) {
    	printf("%c", word[i]);
    }

    return 0;
}