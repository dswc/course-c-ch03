#include <stdio.h>

int main(void) {
	int grade;
	
	scanf("%d", &grade);
	if (grade > 100 | grade < 0){
		printf("¿é¤J¿ù»~");
		return 0;
	}
	
	grade = grade / 10;
	switch (grade) {
		case 10: 
		case 9:
			printf("%s", "A");
			break;
		case 8:
			printf("%s", "B");
			break;
		case 7:
			printf("%s", "C");
			break;
		case 6:
			printf("%s", "D");
			break;
		default:
			printf("%s", "E");
			break;
	}
	
	return 0;
}
