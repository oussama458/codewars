#include <string.h>
#include <stdio.h>
void filter_friends(const char *names[]) {
    int k = 0;
    for (int i = 0; names[i] != NULL; i++) {
        int len = strlen(names[i]);
        if (len == 4) {
            names[k++] = names[i];  
        }
    }
    names[k] = NULL;
}
int main(){
    const char *names[] = {"Ryan", "Kieran", "Jason", "Yous", NULL};
    filter_friends(names);
     printf("Filtered friends: ");
    for(int i=0;names[i] != NULL;i++){
        printf("%s ", names[i]);
    }
    return 0;
}
