#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(5*sizeof(char));
    if (answer == NULL)
    {
        return NULL;
    }
    
    if (num % 2 == 0)
    {
        strcpy(answer, "Even");
    } else {
        strcpy(answer, "Odd");
    }
    return answer;
}

int main () {
    int num1 = 4;
    int num2 = 7;
    
    char* result1 = solution(num1);
    char* result2 = solution(num2);
    
    printf("%d-> %s\n", num1, result1);
    printf("%d-> %s\n", num2, result2);
    
    free(result1);
    free(result2);
    
    return 0;
}