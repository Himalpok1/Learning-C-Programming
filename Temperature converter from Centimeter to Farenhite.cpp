/** Author : Himal POkhrel 
*   Tasks  : TEMPERATURE cONVERTER
*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main ()
{
	float celsius, fahrenheit;
	printf("Enter the Temperature which you would like to convert in Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	
    celsius = (fahrenheit - 32) * 5/9;
    printf ("fahrenheit = %f", celsius);
	 
	
	
	return 0;
}


