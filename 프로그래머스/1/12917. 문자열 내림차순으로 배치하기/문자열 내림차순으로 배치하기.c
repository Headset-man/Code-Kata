#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {

    int len = strlen(s);
    char* answer = (char*)malloc(len + 1);
    strcpy(answer, s);
    
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len -1; j++) {
            if (answer[j] < answer[j + 1]) {
                char temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    
    answer[len] = '\0';
    return answer;
}