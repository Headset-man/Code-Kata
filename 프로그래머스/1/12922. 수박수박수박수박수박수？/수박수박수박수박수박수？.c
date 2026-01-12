#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {

    char* answer = (char*)malloc(n * 3 + 1);
    answer[0] = '\0';

    const char* pattern = "수박";


    for (int i = 0; i < n; i++) {
        strncat(answer, &pattern[i % 2 * 3], 3); 

    }

    return answer;
}

int main() {
    char* result1 = solution(4);
    printf("%s\n", result1);
    free(result1);

    char* result2 = solution(3);
    printf("%s\n", result2);
    free(result2);

    return 0;
}
