/*
#include<stdio.h>

int main(){
    message(); 
    
    printf("\n Cry, and you stop the memory"); 
}

message(){
    printf("\n Smile, and the world smiles with you...."); 
}
*/
// Output 
// Smile, and the world smiles with you....
//  Cry, and you stop the memory


// main itself is a fuction and through it we are calling function message()
// What do we mean by when we say "calling message function by main function"
// We mean that we are calling message function, 
// the activity of main() function is suspended temporiarly; it falls asleep while the message() function wakes up go the work.
// whrn message function run out of statements to execute, the control returns to main(), which comes to life again and begins executing its code at the exact point where it eft off. 
// Thus, main() becomes callling function and message() beomes the called function 



#include<stdio.h>

int main(){
    printf("\n I am in main\n "); 
    italy();
    brazil();
    argentinia();
}

italy(){
    printf("I am in italy\n "); 
}

brazil(){
   printf("I am in barzil\n "); 
}
    
argentinia(){
        printf("I am in argentinia \n "); 
    }


// Output 
// I am in main
//  I am in italy
//  I am in barzil
//  I am in argentinia