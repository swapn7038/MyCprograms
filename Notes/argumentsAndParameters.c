#include<stdio.h>

void birthday(char name[], int age) // Parameters 
{
    printf("\n Happy birthday dear %c!", name); 
    printf("\n You are %d years old!", age); 
}

int main(){
   char name[] = "Karan";
   int age = 20; 

   birthday(name, age);  // Arguments 

   return 0; 
}

// When i use     printf("\n Happy birthday dear %c!", name); 
//  I get output like this  Happy birthday dear ↑! 