/** Author : Himal POkhrel 
*   Tasks  : To check the greatest number
*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main ()
{
	int n1, n2, n3;
	
	printf("Enter three different number.");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if (n1 > n2)
	{
		
		if (n1>n3)
	    {	
		printf("The first number you entered is greatest among these numbers.");	
     	}
	    else 
	    {
		printf("The third number you entered is the greatest among these numbers");
	    }
    }
	else if (n2 > n3)
	printf("The second number you entered is the greatest among these numbers. ");
	
	else 
	printf("The third number you entered is the greatest among these numbers.");
}


	
