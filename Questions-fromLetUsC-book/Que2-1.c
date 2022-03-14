// Example 2.1: While purchasing certain items, a discount of 10% 
// is offered if the quantity purchased is more than 1000. If quantity 
// and price per item are input through the keyboard, write a program 
// to calculate the total expenses.

// Calculation total expense 

#include<stdio.h>

void main(){  
     
     int qty, dis = 0; 
     float rate, tot; 
     printf("Enter quantity and rate"); 
     scanf("%d%d",&qty, &rate); 
     

     if(qty>100)
     dis = 10; 

     tot = (qty*rate) - (qty*rate*dis/100); 
     printf("Total expense = Rs. %f", tot); 


}
