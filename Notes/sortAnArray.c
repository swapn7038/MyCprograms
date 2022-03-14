#include<stdio.h>

void sort(int arr[], int size){

  for(int i=0; i<size -1; i++){
      for(int j=0; j<size-1; j++){
             if(arr[j] < arr[j+1])
             {
                  int temp = arr[j]; 
                  arr[j] = arr[j+1]; 
                  arr[j+1] = temp; 
             }
      }

  }

}


void printArray(int arr[], int size)
{
    for(int i=0; i < size; i++){
         printf("%d\n", arr[i]); 
    }
}

int main(){
   
   int arr[] = {9, 5, 4, 3, 6, 7, 2, 1}; 
   int size = sizeof(arr)/sizeof(arr[0]); 


   sort(arr, size); 
   printArray(arr, size); 

  return 0; 
}


// TTHIS IS BUBBLE SORT ALGORITHIM
// Watch again 