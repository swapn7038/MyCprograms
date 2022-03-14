// Bro code: Youtube channel 
// Date and time : 9/2/22 11:00 PM 

/*

#include<stdio.h>
int main(){

    // array = a daat structure that can store many values of the same data types 

    double prices[] = {5.0, 4.5, 5.5, 3.2, 2.1, 5.5, 3.5, 43}; 

    for(int i=0; i<sizeof(prices)/sizeof(prices[0]); i++){
           printf("$%.2lf \n", prices[i]); 
    } 
    // printf("%lf \n ", prices[i]);   


    return 0;   
 }


*/



// 2D arrays = an array, where each element is an entire array 
// useful if you need a matrix, grid, or table of data 


/*

#include<stdio.h>
int main(){
 
//   int number[4] [4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

int number[2][3]; 

number[0][0] = 1; 
number[0][1] = 2; 
number[0][2] = 3; 
number[1][0] = 4; 
number[1][1] = 5; 
number[1][2] = 6; 


// for(int i=0; i<sizeof(number)/sizeof(0);  i++){
                                                        //   WE NEED NESTED LOOP (LOOP INSIDE LOOP) BECAUSE, IT IS 2D ARRAY // ROW NAD COLUMS IS PRESENT 
// printf("%d \n ", number);   
// }
  

  for(int i=0; i<=2; i++){
      for(int j=0; j<=3; j++){  // we also need two for loops, one for rows and one for column 
            //  printf("%d\n", number);  // this is wrong method 
            printf("%d ", number[i][j]);

      }
      printf("\n"); // Also not to forget new line 

  }
  
  return 0; 
}


*/


// PROGRAM TO PRINT ARRAY IF WE ADDED NEW ELEMENTS IN A ARRAY

#include<stdio.h>
int main(){
 



int number[3][3] = {{1, 2, 3}, 
                   {4, 5, 6}, 
                   {7, 8, 9}} ; 

    int rows = sizeof(number)/sizeof(number[0]); 
    int cloumn = sizeof(number[0])/sizeof(number[0][0]);

    printf("rows \n : %d", rows); 
    printf("columns \n : %d", cloumn); 
     

// number[0][0] = 1; 
// number[0][1] = 2; 
// number[0][2] = 3; 
// number[1][0] = 4; 
// number[1][1] = 5; 
// number[1][2] = 6; 
// number[1][3] = 12; 
// number[1][4] = 22; 


// for(int i=0; i<sizeof(number)/sizeof(0);  i++){
                                                        //   WE NEED NESTED LOOP (LOOP INSIDE LOOP) BECAUSE, IT IS 2D ARRAY // ROW NAD COLUMS IS PRESENT 
// printf("%d \n ", number);   
// }
  

  for(int i=0; i<=rows; i++){
      for(int j=0; j<=cloumn; j++){  // we also need two for loops, one for rows and one for column 
            //  printf("%d\n", number);  // this is wrong method 
            printf("%d ", number[i][j]);

      }
      printf("\n"); // Also not to forget new line 

  }
  
  return 0; 
}









//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

#include<stdio.h>
int main()
{
    int i=0;
    int marks[5]; //Declaration of array elements

    marks[0]=80;//initialization of array elements
    marks[1]=90;
    marks[2]=89;
    marks[3]=70;
    marks[4]=60;
   //traversal of array elements

   for(i=0;i<5;i++)
   {
       printf("\n %d \n", marks[i]); //end of for loop
   }

   return 0;
    
}

*/


///Another way to print array 
// int marks[5]={20,30,40,50,60}; //Initialization of array

//In some cases we dont need ot mention the size of the array
// int marks[]={10,10,20,30,40};




/*
// C array Example : Sorting an Array
// In the following program, we are using bubble sort method to sort the array in ascending order
#include<stdio.h> 
void main ()
{
    int i, j,temp;
    int a[10]={10,9,4,56,6,7,8,8,9,5};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]>a[i])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
        }
    }

    printf("Printing sorted Elements List \n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}

*/


/*
//Program to print largest and second largest array from the List
#include <stdio.h>
void main ()
{
    int arr[100],i,n,sec_largest,largest;
    printf("Enter the size of the array?");
    scanf("%d",&n);
    printf("Enter the elements of the array?");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);

    }

    largest = arr[0];
    sec_largest= arr[1];
    for(i=1;i<n;i++)
    
     {
         if(arr[i] < largest)
         {
             sec_largest = largest;
             largest = arr[i];
         }
         else if (arr[i]>sec_largest && arr[i]!= largest)

         {
             sec_largest=arr[i];
         }

         
     }

     printf("largest = %d, second = %d", largest, sec_largest);
}

*/