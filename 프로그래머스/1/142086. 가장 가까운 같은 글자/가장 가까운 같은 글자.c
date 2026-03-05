#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int len = strlen(s);
    int* answer = (int*)malloc(sizeof(int) * len);
    
    int last_pos[128];
    for (int i = 0; i < 128; i++) {
        last_pos[i] = -1;
    }

    for (int i = 0; i < len; i++) {
        unsigned char current_char = s[i];
        
        if (last_pos[current_char] == -1) {
            answer[i] = -1;
        } else {
            answer[i] = i - last_pos[current_char];
        }
        
        last_pos[current_char] = i;
    }

    return answer;
}