// Program to calculate circumeferance of circle 
// C = 2 * PI * r 
// area = PI * r * r 

#include<stdio.h>
#include<math.h>

int main (){
    
    int a, r=0;
    double cincumference = 0; 
    double PI = 3.14;
    double area = 0; 
 
    printf("Enter the value of radius of circle : ");
    scanf("%d", &r);

    cincumference = 2 * PI * r ; 
    area = PI * r * r ; 

    printf("%lf\n ", cincumference);
    printf("%lf\n ", area);

    return 0;



}