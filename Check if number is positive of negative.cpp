/** Author : Himal POkhrel 
*   Tasks  : To check if the given number is positive or negative

*Prepared : FOr My Self 
*/ 


#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
  // Asking for Inpt
    printf("Input a number :");
    scanf("%d", &num);
    if (num >= 0)
    
    //Declaring heei f the number is positive.
        printf("%d is a positive number \n", num);
    else
    
    //Declaring here if the number is negative.
        printf("%d is a negative number \n", num);
}
