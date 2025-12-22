#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
	if ((0 <= num1 && num1 <= 10000) && (0 <= num2 && num1 <= 10000)) {
		return (num1 == num2) ? 1 : -1;
	}
	return -1;
}

int main() {
	printf("num1\t num2\t result\n");

	int r1 = solution(2, 3);
	printf("%d\t %d\t %d\n", 2, 3, r1);

	int r2 = solution(11, 11);
	printf("%d\t %d\t %d\n", 11, 11, r2);

	int r3 = solution(7, 99);
	printf("%d\t %d\t %d\n", 7, 99, r3);

	return 0;
}