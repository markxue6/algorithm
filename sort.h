#include<iostream>
#include<vector>
using namespace std;

/*
  selection sort
  选择排序
  O(n^2)
*/
void selectionSort(vector<int>& arr, int n)
{
  for(int i = 0; i < n; i++)
  {
    int minIndex = i;
    for(int j = i+1; j < n; j++)
    {
      if(arr[j] < arr[minIndex]) minIndex = j;
    }
    arr[i] = arr[minIndex];
  }
}

/*
  insertion sort
  插入排序
  O(n^2)
*/
void insertionSort(vector<int>& arr, int n)
{
  for(int i = 1; i < n; i++)
  {
    int min = arr[i];
    int j;
    for(j = i; j > 0 && arr[j-1] > min;j--)
    {
      arr[j] = arr[j-1];
    }
    arr[j] = min;
  }
}

/*
  shell sort
  希尔排序
  O(n^2)
*/
void shellSort(vector<int>& arr, int n)
{
    for (int gap = n / 2; gap >= 1; gap /= 2)
    {
        for (int i = gap; i < n; i++) 
        {
            int min = arr[i];
            int j;
            for (j = i; j - gap >= 0 && arr[j - gap] > min; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = min;
        }
    }
}

/*
  bubble sort
  冒泡排序
  O(n^2)
*/
void bubbleSort(vector<int>& arr, int n)
{
    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}