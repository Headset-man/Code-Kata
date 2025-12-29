#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{ 
    int answer = 0;
   
    while (n>0)
    {
        answer += n%10;
        n/=10;
    }

    return answer;
}

int main (void)
{
    printf("N\tanswer\n");
    printf("123\t%d\n", solution(123));
    printf("987\t%d\n",solution(987));

    return 0;
}