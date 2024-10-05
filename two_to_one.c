#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char *longest (const char *s1, const char *s2)
{ 
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int length = 0;
  bool seen[26] = { false };
  char *concat = malloc(len1 + len2 + 1);
  if (concat == NULL) {
        return NULL;  
    }
  strcpy(concat,s1);
  strcat(concat,s2);
  for(int i= 0; concat[i] != '\0' ;i++){
    seen[concat[i]- 'a'] = true;
  }
  for(int i=0;i<26;i++){
    if (seen[i]){
      length++;
    }
  }
  char *result = malloc(length + 1);
    if (result == NULL) {
        free(concat);  // Free previously allocated memory
        return NULL;   // Handle memory allocation failure
    } 
  int index =0;
  for(int i =0;i<26;i++){
    if (seen[i]){
      result[index++] = 'a' + i;
    }
  }
free(concat);
result[index] = '\0';
return result;
}

int main() {
    char s1[] = "dpljnoebgwqpuknoksuzgmsrl";
    char s2[] = "u";
    char *result = longest(s1, s2);
    printf("Result: %s\n", result);

return 0;
}