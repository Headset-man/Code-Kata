#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = num1 * num2;
    return answer;
}

int main() {
    printf("num1\t num2\t result\n");
    
    int r1 = solution (3, 4);
    printf("%d\t %d\t %d\n", 2, 3, r1);
    
    int r2 = solution (27, 19);
    printf("%d\t %d\t %d\n", 27, 19, r2);
    
    return 0;
}