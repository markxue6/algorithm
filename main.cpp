#include<iostream>
#include<vector>
#include<ctime>
#include "sort.h"
using namespace std;


void sortHelp(string sortName, void (*sort)(vector<int>&,int))
{
    srand(time(NULL));
    vector<int>arr;
    int n = 1000;
    for(int i = 0;i < n; i++)
    {
        arr.push_back(rand()%n);
    }

    sort(arr, n);
    bool test = true;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            test = false;
            break;
        }
    }
   // for(auto m:arr) cout<<m<<" ";
    //cout<<endl;
    if(test)
    {
        cout << sortName << " successful!" <<endl;
    }
    else
    {
       cout << sortName << " fail!" <<endl;
    }
}

int main(){
    sortHelp("selectionSort", selectionSort);
    sortHelp("insertionSort", insertionSort);
    sortHelp("shellSort", shellSort);
    sortHelp("bubbleSort", bubbleSort);
}