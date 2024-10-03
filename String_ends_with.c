#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool solution(const char *string, const char *ending)
{
  int lenst = strlen(string);
  int lenend = strlen(ending);  

    if (lenend == 0) {
        return true;
    }
  if (lenst<lenend){
    return false;
  }
  
  for(int i= 0;i<lenend;i++){
    if (string[lenst - lenend + i] != ending[i] ){
      return false;
    }
  }
  return true;
  
  
}

int main() {
    // Test cases
    printf("%d\n", solution("abc", "bc"));    // Should return 1 (true)
    printf("%d\n", solution("abc", "d"));     // Should return 0 (false)
    printf("%d\n", solution("hello", "lo"));  // Should return 1 (true)
    printf("%d\n", solution("hello", "he"));  // Should return 0 (false)
    printf("%d\n", solution("hello", ""));    // Should return 1 (true)
    return 0;
}