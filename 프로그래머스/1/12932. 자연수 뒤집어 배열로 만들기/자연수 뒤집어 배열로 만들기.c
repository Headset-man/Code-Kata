#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int get_digit_count(long long n)
{
    int count = 0;
    while (n > 0) 
    {
        count++;
        n /= 10;
    }
    return count;
}

int* solution(long long n) 
{
    int digit_count = get_digit_count(n);

   
    int* answer = (int*)malloc(sizeof(int) * digit_count);

   
    for (int i = 0; i < digit_count; i++) 
    {
        answer[i] = n % 10;  
        n /= 10;            
    }

    return answer;
}


int main() 
{
    long long n = 12345;
    int digit_count = get_digit_count(n);
    int* result = solution(n);

    printf("[");
    for (int i = 0; i < digit_count; i++) 
    {
        printf("%d", result[i]);
        if (i < digit_count - 1) printf(", ");
    }
    printf("]\n");

    free(result);
    return 0;
}
