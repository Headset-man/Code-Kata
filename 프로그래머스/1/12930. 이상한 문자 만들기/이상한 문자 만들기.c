#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    int len = strlen(s);
    char* answer = (char*)malloc(len + 1);
    if(!answer) return NULL;
    
    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            answer[i] = ' ';
            idx = 0;
        } else {
            if (idx % 2 == 0) {
                answer[i] = toupper(s[i]);
            } else {
                answer[i] = tolower(s[i]);
            }
            idx++;
        }
    }
    
    answer[len] = '\0';
    return answer;
}