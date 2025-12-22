#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = num1 - num2;
    int result;
    return answer;
}

int main() {
    printf("num1\t num2\t result\n");
    
    int r1 = solution (2, 3);
    printf("%d\t %d\t %d\n", 2, 3, r1);
    
    int r2 = solution (100, 2);
    printf("%d\t %d\t %d\n", 100, 2, r2);
    
    return 0;
}