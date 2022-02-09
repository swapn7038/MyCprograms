#include<stdio.h>

double square(double x) // double is argument 
{
     double result = x * x ; 
     return result; 
} 

 
 int main(){

     double x = square(3.14);
     printf("%lf", x); 

     return 0; 
     // return = returns a value back to a calling function     
 }