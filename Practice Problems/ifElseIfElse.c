#include<stdio.h>
#include<math.h>

int main(){
  

     int age; 

     printf("enter your age : ");
     scanf("%d", &age); 

   if(age>=20){
       printf("You are bada baccha "); 
   } 

   else if(age < 0 ){
       printf("You are not borne yet?😑"); 
   }
   else if(age = 17 ){
       printf("You have khatra"); 
   }
   
   else{
       printf("You are chota baccha"); 
   }
      return 0;
}