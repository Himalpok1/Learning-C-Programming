/** Author : Himal POkhrel 
*   Tasks  : To calculate profit and loss

*Prepared : FOr My Self 
*/ 

#include <conio.h>
#include <stdio.h>

int main()
{
    int cp,sp, amt; 
    
// Asking for the cost price and selling price input from the user
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        // Calculate Profit of the user
        amt = sp - cp;
        printf("You are in  Rs. %d Profit bro. ", amt);
    }
    else if(cp > sp)
    {
        // Calculate Loss of the user
        amt = cp - sp;
        printf(" So, sorry to say you are in Rs. %d Loss. ", amt);
    }
    else
    {
        // If the above condition are not satisfied then there is neither profit or loss.
        printf("Steup your business you are neither at profit nor at loss.");
    }

    return 0;
}
