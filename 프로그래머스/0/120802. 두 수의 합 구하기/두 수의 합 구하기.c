#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    if ((-50000 <= num1 && num1 <=50000)
        &&(-50000 <= num2 && num2 <= 50000)){
        int answer = num1 + num2;
        return answer;
    }
    return -1;
}
int main () {
    printf("num1\t num2\t result\n");
    
    int r1 = solution(2,3);
    printf("%d\t %d\t %d\n", 2, 3, r1);
    
    int r2 = solution(100,2);
    printf("%d\t %d\t %d\n", 100, 2, r2);
    
    return 0;
}