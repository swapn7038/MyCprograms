// Example 2.2: The current year and the year in which the 
// employee joined the organization are entered through the 
// keyboard. If the number of yeard for which the employee
// has served the organization is greater than 3 years then a bounce
// of Rs.1500/- 
// is give n to the employee. If the years of services
// are not greater than 3, then the program should do nothing. 


// Calculation of bonus 

#include<stdio.h>

void main(){  

    int bonus, cy, yoj, yr_of_ser; 

    printf("Enter current year and year of joining"); 
    scanf("%d %d", &cy, &yoj); 

    yr_of_ser = cy - yoj; 

    if (yr_of_ser > 3)
    {
        bonus = 1500; 
        printf("Bonus = Rs. %d", bonus); 
    }
    
}