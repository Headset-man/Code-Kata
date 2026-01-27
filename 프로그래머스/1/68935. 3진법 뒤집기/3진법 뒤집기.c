#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int arr[100];
    int size = 0;
    
    while (n > 0){
        arr[size++] = n % 3;
        n /= 3;
    }
    
    int answer = 0;
    int power = 1;
    for (int i = size - 1; i >= 0; i--)  {
        answer += arr[i] * power;
        power *= 3;
    }
    
    return answer;
}