/** Author : Himal POkhrel 
*   Tasks  : TO convert distance in miles into kilometer
*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main ()

{
	float miles, kilometers; 
	
	printf("nter the distance in Miles:  ");
	scanf("%f", &miles);
	
	kilometers = miles*1.6;
	printf("Your Converted value in kilometer is = %f", kilometers);
	
	getch();
	return 0;
	
}
