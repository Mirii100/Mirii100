#include<stdio.h>
int addnumbers(int num1,int num2)
{
int sum;
sum=num1+num2;
return sum;
}
int main()
{
	int num1,num2,total;
	printf("enter 2 numbers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	total=addnumbers(num1,num2);
	printf("Answer is %d" ,total);
	return 0;
	}
