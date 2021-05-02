/** Author : Himal POkhrel 
*   Tasks  : To check if a person is eligibe to vote or not 
*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main ()
{
	int a;
	
	// Here a = age of the person. 
	printf("Enter your age ");
	scanf("%d", &a);
	
	// Checking your eligibility. 
	
	if (a>16)
	{
		printf ("You are eligible for voting.");
	}
	else 
	{
		printf("Sorry you are not eligible for voting.");
		
	}
	return 0;

}
