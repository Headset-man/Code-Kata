#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
	if (0 < age && age <= 120) {
		int answer = age;
		answer = 2022 - age + 1;
		return answer;
	}
	else {
		printf("invalid age");
		return -1;
	}
}

int main() {

	printf("age\t result\n");

	int age1 = 40;
	int answer1 = solution(age1);
	printf("%d\t %d\n", age1, answer1);

	int age2 = 23;
	int answer2 = solution(age2);
	printf("%d\t %d\n", age2, answer2);
}