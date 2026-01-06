#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    int min = (a<b) ? a:b;
    int max = (a>b) ? a:b;
    
    long long n = (long long)(max-min+1);
    
    long long answer = n * (min+max)/2;
    return answer;
}