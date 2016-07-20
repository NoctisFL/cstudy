#include <stdio.h>

int main()
{
	int height;
	int weight;
	int cha;
	
	height = 173;
	weight = 60;
	cha = height - weight;
	
	printf("신장: %dcm\n", height);
	printf("체중: %dkg\n", weight);
	printf("신장에서 체중을 뺀 값: %d", cha);
	return 0;
}