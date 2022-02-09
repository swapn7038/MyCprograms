// Bro code : 9/2/2022 

#include<stdio.h>
#include<string.h>
int main(){

    // While loop - checks a condition, THEN executes a block of code of code if condition is true 
    // do while loop - always executes a block of code once, THNE checjs a condition 
    //    needs to watch this video again // do while loop


    char name[25];

     printf("Whats your name?:"); 
            fgets(name, 25, stdin); 
            name[strlen(name) -1] = '\0';
        

        while (strlen(name) == 0)
        {
            /* code */
            printf("You did not enter your name \n"); 
            printf("Whats your name?:"); 
            fgets(name, 25, stdin); 
            name[strlen(name) -1] = '\0'; 

        }
        

    printf("Helllo %s", name);  
    return 0; 
}


