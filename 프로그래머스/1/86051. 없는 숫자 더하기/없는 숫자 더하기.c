#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int total = 45;
    int sum = 0;
    
    for (size_t i=0; i<numbers_len; i++) {
        sum += numbers[i];
    }
    
    int answer = total - sum;
    return answer;
}