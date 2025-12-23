#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for (int i = 2; i <= n; i += 2) {  
        answer += i;
    }
    return answer;
}

int main() {
    printf("%d\n", solution(10)); 
    printf("%d\n", solution(4));  
    return 0;
}
