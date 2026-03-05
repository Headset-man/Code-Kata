#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* solution(int numbers[], size_t numbers_len) {
    int max_combinations = numbers_len * (numbers_len - 1) / 2;
    int* temp = (int*)malloc(sizeof(int) * max_combinations);
    int count = 0;

    for (int i = 0; i < numbers_len; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            temp[count++] = numbers[i] + numbers[j];
        }
    }

    qsort(temp, count, sizeof(int), compare);

   int* answer = (int*)malloc(sizeof(int) * count);
    int unique_count = 0;

    if (count > 0) {
        answer[unique_count++] = temp[0];
        for (int i = 1; i < count; i++) {
            if (temp[i] != temp[i - 1]) {
                answer[unique_count++] = temp[i];
            }
        }
    }

    answer = (int*)realloc(answer, sizeof(int) * unique_count);

    free(temp);

    return answer;
}