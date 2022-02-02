// 9 No Program for finding the given number is even or odd, by using is else 
// Swapnil Shelke
// BCS-1
// Roll No : 48
//Date : 03-12-21

/*


#include<stdio.h> 
#include<conio.h>

int main () {
    int a;
    printf("Enter One Number  : "  );
    scanf("%d", &a);

    if (a%2==0){
        printf("Number is even  %d:" a );
    }

    else {
        printf("Number is odd %d:" a );
         }
 getch();
            
 
}
*/


#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}
