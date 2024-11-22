#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_camel_case(const char *text, char *camel) {
    int i = 0, j = 0;
    int capitalize_next = 0;

    while (text[i] != '\0') {
        if (text[i] == '-' || text[i] == '_') {
            capitalize_next = 1;
            i++;
            continue;
        }

        if (capitalize_next) {
            camel[j++] = toupper(text[i]);
            capitalize_next = 0;
        } else if (j == 0) {
            camel[j++] = text[i];
        } else {
            camel[j++] = tolower(text[i]);
        }
        
        i++;
    }
    
    camel[j] = '\0';
}

int main() {
    char result[100];
    to_camel_case("the-stealth-warrior", result);
    printf("%s\n", result);
    return 0;
}