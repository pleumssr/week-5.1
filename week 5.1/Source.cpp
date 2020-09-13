#include<stdio.h>
int main()
{
	float x;
	scanf_s("%f",&x);
	if (x > 0)
	{
		printf("more than zero");
	}
	else printf("less or equal");
	return 0;
}