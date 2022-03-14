#include<stdio.h>
#include<string.h>

struct student {
     char name[12]; 
     float gpa; 
 }; 



int main(){

  struct student student1 = {"Spongebob", 3.0};  
  struct student student2 = {"Patrick", 2.5};  
  struct student student3 = {"Swapnil", 5.0};  
  struct student student4 = {"unknown", 1.0};  
  
  struct student students [] = {student1, student2, student3, student4}; 

  for(int i =0; i<sizeof(students)/sizeof(students[0]); i++)
  {
      printf("name:%s \t", student[i].name); 
      printf("gpa:%s \t", student[i].gpa); 
  }


  return 0; 
}