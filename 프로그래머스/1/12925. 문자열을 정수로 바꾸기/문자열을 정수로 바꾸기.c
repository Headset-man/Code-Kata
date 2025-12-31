#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s) {
    
    long result = strtol(s, NULL, 10);

    return (int)result;
}

int main() {
    printf("%d\n", solution("1234"));  
    printf("%d\n", solution("-1234"));  
    printf("%d\n", solution("+567"));   
    return 0;
}
