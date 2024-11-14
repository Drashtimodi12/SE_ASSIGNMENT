// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include <stdio.h> 
int main() 
{
    int customer_id;
    char customer_name[50];  
    float units_consumed, total, bill, sur = 0;  

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


    
    if (total > 800)
    {
        sur = total * 0.18;  
        bill= total + sur;
    }

    if (total < 256) 
    {
        total = 256;
    }

    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Surcharge: %.2f\n", sur);
    printf("Total Amount: %.2f\n", bill);

}