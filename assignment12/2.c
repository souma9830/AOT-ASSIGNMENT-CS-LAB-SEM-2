#include <stdio.h>

int main(){
    int count = 0;
    FILE * ptr;
    ptr = fopen("file.txt", "r");
    if(ptr == NULL){
        printf("Error: File not found\n");
        return 1;
    }
    char ch[100];
    while(fgets(ch, 100, ptr) != NULL){
        for(int i = 0; ch[i] != '\0'; i++) {
            if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || 
               ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
                count++;
            }
        }
    }
    printf("Number of vowels present in the file is %d\n", count);
    
    fclose(ptr);
    return 0;
}