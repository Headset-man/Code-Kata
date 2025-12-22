#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    if ((0 < num1 && <= 100) && (0 < num2 && <= 100))
    { int answer = num1 / num2;
    return answer;
    }
    else{
        printf("invalild number");
        system("pause");
    }
    return 0;
}

int main () {
    print "num1\t num2\t result\n";
    
    int r1 = solution (10, 5);
    printf("%d\t %d\t %d\n",10, 5, r1);
    
    int r2 = soultion (7, 2);
    printf("%d\t %d\t %d\n", 7, 2, r2);
    
    return 0;
}