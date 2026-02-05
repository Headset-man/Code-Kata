#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* t, const char* p) {
    int answer = 0;
    int len_t = strlen(t);
    int len_p = strlen(p);
    long long num_p = atoll(p);

    for (int i = 0; i <= len_t - len_p; i++) {
        char temp[20];
        
        strncpy(temp, t + i, len_p);
        temp[len_p] = '\0';
        
        long long num_t = atoll(temp); 
        
        if (num_t <= num_p) {
            answer++;
        }
    }
    
    return answer;
}