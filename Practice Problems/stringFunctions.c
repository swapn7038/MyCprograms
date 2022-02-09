#include<stdio.h>
#include<string.h>
int main(){
 
 char string1[] = "Bro"; 
 char string2[] = "Code"; 

//  strlwr(string1);       // Convert a string to lowercase
//  strupr(string1);       // Convert a string to uppercase 
// strcat(string1, string2);  // Joind two strings 
// strncat(string1, string2, 1);  // appends n character from string1 to string2 
// strcpy(string1, string2);      // Copy string 2 to 1 
// strncpy(string1, string2, 1);     // copy n characters of string2 to string1 

// strset(string1, '?');      // set all characters to given character 
// strnset(string1, 'x', 3);      // sets first n characters o a string to a given character 
// strrev(string1);       // reverse a string 

// int result = strlen(string1); // returns string length as int 
// int result = strcmp(string1, string2); // String compare all characters // If they are the same they will retunen  0
// int result = strncmp(string1, string2, 1); // string compare n character 
int result = strcmp(string1, string2); // string compare alll (ignore case)






printf("%d", result); 

  return 0; 
}


// There are lot more functions include in header file  string.h, but we need to study more things like pointer and many more 
// this were the basic string functions