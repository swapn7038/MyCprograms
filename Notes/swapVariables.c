/*
#include<stdio.h>
int main(){
  char x ='x'; 
  char y ='y'; 
  char temp; 
  
  temp = x; 
  x= y ; 
  y = temp; 

  printf("x = %c\n", x);
  printf("y = %c\n", y);

  return 0; 
}
*/


#include<stdio.h>
#include<string.h>
int main(){
  char x[] ="Water"; 
  char y[]="Lemonade"; 
  char temp[15]; 
  
  strcpy(temp, x); 
  strcpy(x, y); 
  strcpy(y, temp); 

  printf("x = %s\n", x);
  printf("y = %s\n", y);

  return 0; 
}