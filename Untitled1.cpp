/** Author : Himal POkhrel 
*   Tasks  : checking Operators 
*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main ()
{
	
	int a= 20;
	
	printf("Initialized value of a is %d.", a);
	printf("\n Value for ++a, a, a++ respectively is ");
	printf("%d %d %d", ++a, a, a++);
	
	a=20;
	printf("\n \n Similarly, Value for a++, a, a++ respectively is ");
	printf("%d %d %d", a++, a, ++a);
	
	a=20; 
	printf("\n \n similarly, Value of a, ++a, ++a respectively is ");
	printf("%d %d", a, ++a);
	
	a=20;
	printf("\n \n similarly, Value of a, a++, respectively is ");
	printf("%d %d", a, a++);
	
	a=20;
	printf("\n \n similarly, Value of a++, a, respectively is ");
	printf("%d %d", a++, a);
	
	a=20;
	printf("\n \n similarly, Value of ++a, a, respectively is ");
	printf("%d %d", ++a, a);
	
	getch();
	
}

