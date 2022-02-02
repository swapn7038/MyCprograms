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