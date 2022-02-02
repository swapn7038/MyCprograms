//Program for calculating the greatest number among two number using (is else)
//Swapnil Shelke
//BCS-1
//Roll Number : 48

/*
#include<stdio.h>
#include<conio.h>

int main ()
{
    int a,b;
    printf("Enter the Three number :");
    scanf("%d%d", &a, &b);

    if (a>b) {
        printf("%d Is greatest number : "a);
    }

    else if (b>a) {
        printf("%d Is greater number:" b);
    }

    getch();
}

*/

#include <stdio.h>

int main(void)

{

	int num1,num2;

	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);

	if(num1>num2)

    { printf("%d is greatest",num1); }
	
	
	else if(num2>num1)
	{
printf("%d is greatest",num2);	
}

	
	else


	{
		printf("%d and %d are equal",num1,num2);
        }
return 0;

}

	

















    