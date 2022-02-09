#include<stdio.h>
void main() {

    int i,j,rows;
    printf("Enter the number of rows you want : ");
    scanf("%d",&rows);
    for (i =1; i<=rows; i++) {
        for(j=1; j<=i; j++)
        {
            printf("%c", 64+j);
        }
        printf("\n");
    }

    getch();
}