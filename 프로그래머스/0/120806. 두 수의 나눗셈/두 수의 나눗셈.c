#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    if((0<=num1&&num1<=100 
        && 0<=num2 && num2<=100)) {
        double answer = ((double)num1 / num2)*1000;
        return (int)answer;
    }
    return -1;
}

int main() {
    printf("num1\t num2\t result\n");
    
    int r1 = solution(3,2);
    printf("%d\t %d\t %d\n", 3, 2, r1);
    
    int r2 = solution(7,3);
    printf("%d\t %d\t %d\n", 7, 3, r2);
    
    int r3 = solution(1,16);
    printf("%d\t %d\t %d\n", 1, 16, r3);
    
    return 0;
}