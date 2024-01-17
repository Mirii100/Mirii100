#include <stdio.h>
int main()
{
int x=1,factorial;

do
{ 
factorial=factorial*x;
printf("%d!=%d\n",x,factorial);x++; 
}
while(x<=20);
return 0;
}
