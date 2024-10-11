#include <stddef.h>
#include <string.h>
#include <stdlib.h>
int *parse (const char *program)
{ int result = 0;
  int len = strlen(program);
  char list[len];
  int k = 0;
  int *output = malloc(len * sizeof(int));
 
  for(int i=0;i<len;i++){
  
  if (program[i] =='i'){
    result += 1;
    }else if (program[i] == 'd') {
      result -= 1;
    } else if (program[i] == 's') {
      result = result * result;
    } else if (program[i] == 'o') {
      output[k] = result;
      k++;
  }  
}
    output[k] = -1;
	return output;
}






#include <stdio.h>

int main() {
    const char *program = "iiisdoso";
    
    int *output = parse(program);

    
    for (size_t i = 0; output[i] != -1; i++) {
        printf("%d ", output[i]);
    }

    
    free(output);

    return 0;
}
