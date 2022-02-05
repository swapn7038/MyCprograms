#include<stdio.h>
#include<math.h>

int main() {
    double A;
    double B;
    double C;

    printf("Enter the valuse of side triangle : "); 
    scanf("%lf", &A);
    printf("Enter the valuse of side triangle : "); 
    scanf("%lf", &B);


    C = sqrt(A*A + B*B);

    printf("Side C : %lf", C);

    return 0; 
}