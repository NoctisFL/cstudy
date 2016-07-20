#include <stdio.h>

int main()
{
	int num1, num2, res;
	printf("두 정수값을 입력하시오: ");
	scanf("%d%d", &num1, &num2);
	
	res = num1 + num2;
	
	printf("두 정수의 합: %d", res);
	return 0;
}