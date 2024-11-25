// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_anagram(const char *s1,const char *s2){
    if (strlen(s1) != strlen(s2)) {
        return false;
    }
    int counts[256] = {0};

    for(int i = 0; s1[i] != '\0'; i++) {
        counts[tolower(s1[i])]++;   
    }
    
    for(int i = 0; s2[i] != '\0'; i++) {
        counts[tolower(s2[i])]--;   
    }
    
    for(int i = 0; i < 256; i++) {
        if(counts[i] != 0) {
            return false;
        }
    }
    
    return true;
}
int main() {
    printf("hello ,try to test my function \n");
    printf("%d",is_anagram("hello","hellao"));
    printf("%d",is_anagram("hello","helol"));
    return 0;
}