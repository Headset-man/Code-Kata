#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    long long sum = 0;
    for (size_t i = 0; i < arr_len; i++) {
        sum += arr[i];
    }
    return (double)sum / arr_len;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 5};
    
    size_t len1 = sizeof(arr1) / sizeof(arr1[0]);
    size_t len2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("arr\t\treturn\n");
    printf("[1,2,3,4]\t%.1f\n", solution(arr1, len1));
    printf("[5,5]\t\t%.f\n", solution(arr2, len2));
    
    return 0;
}
