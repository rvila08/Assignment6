#include "sort.h"
using namespace std;

sort::sort(){

}

void sort::selectionSort(int myArray[], int n){
    int i,j,minIndex,tmp;
    for(i = 0; i<n-1;i++){
      minIndex = i;
      for(j=i+1;j<n;j++){
        if(myArray[j] < myArray[minIndex])
          minIndex = j;
        if(minIndex !=i){
          tmp = myArray[i];
          myArray[i] = myArray[minIndex];
          myArray[minIndex] = tmp;
        }
      }
    }
}

void sort::bubbleSort(int myArray[]){
  for(int i=0; i<10; ++i){
    int temp = 0;
    for(int j = 0; j<10; ++j){
      if(myArray[j] > myArray[j+1]){
        temp = myArray[j+1];
        myArray[j+1] = myArray[j];
        myArray[j] = temp;
      }
    }
  }
}

//https://www.geeksforgeeks.org/insertion-sort/
void sort::insertionSort(int arr[], int n)
{
    int index, key, j;
    for (index = 1; index < n; index++)
    {
        key = arr[index];
        j = index - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void swap(int *arr, int a, int b){

  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

int sort::quickSortStep(int *arr, int a, int b){

  int pivot = arr[b];
  int leftEdge = a;
  for(int i = a; i<b; ++i){
    if(arr[i] <= pivot){
      //swap(arr, arr[i],arr[leftEdge]);
      leftEdge++;
    }
  }
  //swap(arr, arr[leftEdge], arr[b]);
  return leftEdge;
}

void sort::quickSort(int *arr,int a, int b){

  if(a<b){
    int leftEdge = quickSortStep(arr,a,b);
    quickSort(arr,a,leftEdge-1);
    quickSort(arr,leftEdge+1,b);
  }
}
