/*WAP to calculate and print the electricity bill of a given customer. 
The customer ID, name, and unit consumed by the user should be captured from the keyboard 
to display the total amount to be paid to the customer. The charge are as follow :
Unit	                            Charge/unit
upto 350	                        @1.20
350 and above but less than 600	    @1.50
600 and above but less than 800	    @1.80
800 and above	                    @2.00
*/

#include <stdio.h> 
int main() 
{
    int customer_id;
    char customer_name[50];  
    float units_consumed, total;

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);  
    printf("Enter Units Consumed: ");
    scanf("%f", &units_consumed);

    if (units_consumed <= 350) 
    {
        total = units_consumed * 1.20;
    } 
    else if (units_consumed < 600) 
    {
        total = 350 * 1.20 + (units_consumed - 350) * 1.50;
    } 
    else if (units_consumed < 800) 
    {
        total = 350 * 1.20 + (600 - 350) * 1.50 + (units_consumed - 600) * 1.80;
    } 
    else 
    {
        total = 350 * 1.20 + (600 - 350) * 1.50 + (800 - 600) * 1.80 + (units_consumed - 800) * 2.00;
    }

    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %f\n", units_consumed);
    printf("Total Amount: %f\n", total);
}