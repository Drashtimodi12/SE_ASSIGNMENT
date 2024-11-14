// Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
    int min, sec, hou;

    printf("Enter the numbers of minutes: ");
    scanf("%d",&min);
    
    hou= min / 60;
    sec= min * 60;
   

    printf("%d minutes is equivalent to %d hours and %d seconds.\n", min, hou, sec);
}