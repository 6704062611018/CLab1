#include<stdio.h>
int main() {
	int num1 , num2;
	scanf("%d %d", &num1, &num2);
	if (num1>num2) {
		int total = num1-num2;
		printf("num1 greater than num2 = %d", total);	
	}
	else {
		int total = num2-num1;
		printf ("num2 greater than num1 = %d", total);	
	}	
}
