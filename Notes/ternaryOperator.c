#include<stdio.h>

int findMax(int x, int y)
{
    // if(x>y){
    //     return x ; 
    // }

    //  else {
    //      return y; 
    //  }

    return (x>y) ? x : y ;
    // (condition) ? if true print this : if false print this ; 
}

int main(){

    // Ternamry operator = shortcut to if/else when assigning/ returning a value 
    // (consdition) ? value if true : value if false 

    int max = findMax(3, 4); 

    printf("%d", max); 

    return 0; 

}

