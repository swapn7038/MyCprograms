//swapnil Shelke 
//BCS-1 
//Date : 03/12/21

// Program for finding the greatest number among three number (using ladder if-else)

#include<stdio.h>
#include<conio.h>
void main() 
{
    int a,b,c;
    // clrscr();
    printf("Enter threee number : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c) {
     printf("\n %d is greatest number : ", a);
                    }

    else if (b>a && b>c) {
        printf("%d is greatest number : ", b);
    }

    else {
        printf("\n  is greatest number  %d  : ",c);
    } 
    getch();
}


//Output 

Enter threee number : 10 20 30

This   is greatest number 30: