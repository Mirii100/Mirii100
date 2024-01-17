#include<stdio.h>
int main()
{
	int x,factorial=1;
	for(x=1;x<=20 ;x++)
	{
		factorial*=x;
		printf("%d!=%d\n",x,factorial);
	}
	return 0;
}
