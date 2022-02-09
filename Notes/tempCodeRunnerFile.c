#include<stdio.h>
int main(){

//   while loop : checks a condition, THEN executes a block of code if consdition is true 
// do while loop : always executes a block of code once, THEN checks a condition 

int number ; 
int sum; 

while(number>0){ 
    printf("Enter the number above 0 "); 
    scanf("%d", &number); 
    if(number>0){
       sum += number; 
    }

}

printf("sum : %d", &sum);
  return 0; 
}