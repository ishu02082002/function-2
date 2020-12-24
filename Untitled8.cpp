#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	int c=1;
	b=456;
	for(a=2;a<b;a++)
	{
		if((b%a)==0)
		{
			c=0;
		}
	}
	if(c==1)
	printf("%d is prime number",b);
	else
	printf("%d is not prime number",b);
	return 0;
}
