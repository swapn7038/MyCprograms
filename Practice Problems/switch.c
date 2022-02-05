// switch - A more efficient alternative to using else if statements 
// allows a values to be tested for equality against many cases 

#include<stdio.h>

int main(){

    int grade; 

    printf("Enter you grade:"); 
    scanf("%c", &grade); 

    switch (grade) {
        case 'A': 
          printf("You are perfect!"); 
        break; 
        case 'B':
          printf("You are little bit perfect!"); 
        break; 
        case 'C': 
          printf("You are okay okay !"); 
        break; 
        case 'D': 
          printf("You need lot of improvements !"); 
        break; 
        case 'E': 
          printf("Failed!"); 
        break; 
        case 'F': 
          printf("Get out of the college!"); 
          break;
        default: 
         printf("Please enter valid grades "); 
        
    }

    return 0; 
}