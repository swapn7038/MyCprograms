//Program for finding greatest number among three number using (Nested if else)
//Swapnil Shelke
//Class : BCS-1
//Roll Number  :48

#include<stdio.h>
#include<conio.h>
void main () 
{
    int a,b,c;
    clrscr();
    printf("Enter three numbers : ");
    scanf("%d%d%d"&a,&b,&c);
    {if (a>b)
     {
         if (a>c) 
           printf("%d Is greatest number  :" a);
     }
    }


    else if (b>c)
       {if (b>c)
          printf("%d Is greatest number:" b);

          else 
           printf("%d Is greatest number:"c);
           
       }
    

    getch();
}