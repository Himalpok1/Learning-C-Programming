/** Author : Himal POkhrel 
*   Tasks  : To check if  5 is divisible or not

*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main ()
{
	
	int num;
	printf("Enter your desired number: ");
	scanf("%d", &num);
	
	if (num % 7 == 0)
	{
			printf("The number is divisible by 7.");
	}

	else if (num % 13 == 0) 
	{
		printf("The number is divisible by 13.");
	}
	
	else if (num % 2 == 0)
	{
		printf("the number is divisible by 2.");
	}
	return 0;
}
