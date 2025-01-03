/* Write a C program to determine eligibility for admission to a professional course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and 
                       Marks in Phy >=55 and 
                       Marks in Chem>=50 and 
Total in all three subject >=190 or 
Total in Maths and Physics >=140

Input the marks obtained in Physics :65 
Input the marks obtained in Chemistry :51 
Input the marks obtained in Mathematics :72 
Total marks of Maths, Physics and Chemistry : 188 
Total marks of Maths and Physics : 137 
The candidate is not eligible.
*/


#include <stdio.h>
int main() 
{
    int math, phy, chem, total, math_phy_total;

    printf("Input the marks in Physics: ");
    scanf("%d", &phy);
    printf("Input the marks in Chemistry: ");
    scanf("%d", &chem);
    printf("Input the marks in Mathematics: ");
    scanf("%d", &math);

    total = math + phy + chem;
    math_phy_total = math + phy;

    printf("Total marks of Maths, Physics and Chemistry: %d\n", total);
    printf("Total marks of Maths and Physics: %d\n", math_phy_total);

    if (math >= 65 && phy >= 55 && chem >= 50 && (total >= 190 || math_phy_total >= 140)) 
    {
        printf("The candidate is eligible.\n");
    } 
    else 
    {
        printf("The candidate is not eligible.\n");
    }
}