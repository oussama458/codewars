
#include <stdio.h>
#include <string.h>

int somin(int input[],int n){
    int temp0 = __INT_MAX__;
    int temp1 = __INT_MAX__;
    for(int i = 0 ;i < n ;i++){
        
        if (input[i] < temp0) {
            temp1 = temp0;  
            temp0 = input[i];  
        } else if (input[i] < temp1) {
            temp1 = input[i];  
        }
    
    }
    return temp0 + temp1 ;
}
int main()
{
    printf("result is");
    int k[] = {19, 5, 42, 2, 77};
    int n = sizeof(k) / sizeof(k[0]);
     int result = somin(k, n);
    
    printf("%d",result);
    return 0;
}