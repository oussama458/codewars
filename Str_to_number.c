#include <stdio.h>
#include <string.h>
int string_to_number(const char *src) {
  int num = 0;
  int i = 0;
  int sign = 1;
   //check the sign ,and handle it
  if(src[0] == '-'){
    sign = -1;
    i = 1;
  }
  for(;src[i] != '\0';i++){
    num = num * 10 + (src[i] - '0');
  }
  return num * sign;
}
int main(){
    printf("%d\n", string_to_number("1234"));  // Output: 1234
    printf("%d\n", string_to_number("605"));   // Output: 605
    printf("%d\n", string_to_number("1405"));  // Output: 1405
    printf("%d\n", string_to_number("-7"));    // Output: -7
    return 0;
}