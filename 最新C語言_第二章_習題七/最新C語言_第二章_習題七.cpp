#include <stdio.h>
#include <stdlib.h>

int main()
{
	float answer;

	answer = 5 * 2 + 1.0 / 10; //這裡如果只打5*2+1/10的話只會顯示整數

	printf("5*2+1/10的答案為:%.2f\n", answer);

	system("PAUSE");
	return 0;
}