/** Author : Himal POkhrel 
*   Tasks  : TO convert the Height fron inch to centimeter 
*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main ()
{
	
	float inch,cm;
	printf("Enter your height in inch: ");
	scanf("%f",&inch);
	
	cm = inch * 2.55 ;
	
	printf("Your Height in centimeter is = %f", cm);
	printf("\n Mummy ko bolo Complain pilaye");
	getch();
	return 0;
}
