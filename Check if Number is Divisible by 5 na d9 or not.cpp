/** Author : Himal POkhrel 
*   Tasks  : To check if  5 is divisible or not

*Prepared : FOr My Self 
*/ 

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if((num % 5 == 0) && (num % 9 == 0))
    {
        printf("Number is divisible by 5 and 9");
    }
    else
    {
        printf("Number is not divisible by 5 and 9");
    }

    return 0;
}
