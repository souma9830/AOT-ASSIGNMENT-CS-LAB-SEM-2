#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet:\n");
    scanf(" %c", &ch); 

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Alphabet is Vowel");
            break;  
        default:
            printf("Alphabet is Consonant"); 
    }

    return 0;
}
