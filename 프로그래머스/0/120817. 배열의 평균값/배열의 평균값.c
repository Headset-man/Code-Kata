#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
double solution(int numbers[], size_t numbers_len) {
    int sum = 0;
    for (size_t i = 0; i < numbers_len; i++) {
        sum += numbers[i];
    }
    
    double answer = (double)sum / numbers_len;
    return answer;
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {89,90,91,92,93,94,95,96,97,98,99};
    
    printf("%.1f\n", solution(arr1, 10));
    printf("%.1f\n", solution(arr2, 11));
    
    return 0;
}