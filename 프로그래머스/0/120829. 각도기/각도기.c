#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = 0;
    
    if(angle > 0 && angle < 90) {
        answer = 1; // 예각
    } else if (angle == 90) {
        answer = 2; // 직각
    } else if (angle > 90 && angle < 180) {
        answer = 3; // 둔각
    } else if (angle == 180) {
        answer = 4; // 평각
    }
    
    return answer;
}

int main()
{
    printf("angle\t result\n");
    
    int r1 = solution(70);
    printf("%d\t %d\n", 70, r1);
    
    int r2 = solution(91);
    printf("%d\t %d\n", 91, r2);
    
    int r3 = solution(180);
    printf("%d\t %d\n", 180, r3);
    
    return 0;
}