// Function prototype Here : Bro Code 
#include<stdio.h>


int main(){
  

  char name[] = "Swapnil"; 
  int age = 20; 

  hello(name, age); 
// Function prototype 
//  What is it?
// Function declaration, w/o a body, before main()
// Ensures that calls to a function are made with the correct arguments 


// Important notes 
// Many C compilers do not check for parameter matching 
// Missing arguments will in unexpected bahaviour 
// A function prototype cause the compiler to flag an error if arguments are missing 

// Asvantages
// 1. Easier to navigate program 
// 2. Helps with dubugging 
// 3. Commonly used in header files 

  return 0; 
}


void hello(char name[], int age){
   printf("\n Hello %s", name);         
   printf("\n You are %d years old", age);         
   
}