#ifndef Sort_H
#define Sort_H

class sort{

public:
  sort();
  void bubbleSort(int myArray[]);
  void selectionSort(int myArray[], int n);
  void insertionSort(int arr[], int n);
  int quickSortStep(int *arr,int a, int b);
  void quickSort(int *arr, int a, int b);
  void swap(int *arr, int a, int b);

private:


};

#endif
