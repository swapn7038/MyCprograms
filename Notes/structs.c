#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Player  // outside main function
{
 char name[12]; 
 int score; 
}; 


int main(){
   

struct Player player1; 
struct Player player2; 

strcpy(player1.name, "Bro");  // . is member access operator 
player1.score = 4; 

strcpy(player2.name, "Cro"); 
player2.score = 5; 


printf("%s\n", player1.name); 
printf("%s\n", player1.score);

printf("%s\n", player2.name); 
printf("%s\n", player2.score);


  
return 0; 

}



// struct = collection of related members ("variables")
//           they can be of different data types 
//           listed under one name in a block of memory 
//           vary similar to classes in other languages (but no methods)
//           Use to mimic real world objects 