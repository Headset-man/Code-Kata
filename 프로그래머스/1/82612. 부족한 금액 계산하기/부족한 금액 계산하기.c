#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {

    long long total_cost 
        = (long long)price * count * (count + 1) / 2;
    
    long long answer = total_cost - money;
    
    if (answer < 0) answer = 0;
    
    return answer;
}