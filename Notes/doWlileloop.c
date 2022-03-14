// #include<stdio.h>
// int main(){

// //   while loop : checks a condition, THEN executes a block of code if consdition is true 
// // do while loop : always executes a block of code once, THEN checks a condition 

// int number  = 0; 
// int sum = 0; 

// do (number>0){ 
//     printf("Enter the number above 0 "); 
//     scanf("%d", &number); 
//     while(number>0)
    
//     {
//        sum += number; 
//     }

// }

// printf("sum : %d", &sum);
//   return 0; 
// }

// Watch from jennys lecture on this topic 
//////////////////////////////////////////////////////////////// DO WHILE LOOP ////////////////////////////////////////////////////////////////
// do while syntax
/*
do{
    statements 
}
while(); 
*/

#include<stdio.h>
int main(){
   
   int i =0; 
   do{
       printf("Swapnil\n");
    //    i++; // i++ for infinite loop 
    i--;
   } while(i>0); // semicolon here 
   {
      printf("Swapy");
   }
  return 0; 
}  // do while : Exit control loop

// While : Entry control loop 

// WHEN SHOULD I PREFER DO-WHILE OVER WHILE?