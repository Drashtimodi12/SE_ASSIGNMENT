/* Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 150 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill
*/

#include <stdio.h> 
int main() 
{
    int customer_id;
    char customer_name[50];  
    float unit, bill, total, sur = 0;  

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);  
    
    printf("Enter Units Consumed: ");
    scanf("%f", &unit);


    if (unit <= 50) 
    {
        total = unit * 0.50;
    } 
    else if (unit <= 150) 
    {
        total = (50 * 0.50) + ((unit - 50) * 0.75);
    } 
    else if (unit <= 250) 
    {
        total = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    } 
    else 
    {
        total = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }


    sur = total * 0.18;  
    bill= total + sur;

    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", unit);
    printf("Surcharge: %.2f\n", sur);
    printf("Total Amount: %.2f\n", bill);

}