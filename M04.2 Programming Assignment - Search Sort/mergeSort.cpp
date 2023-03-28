/*
Program to demonstrate the use of merge sort.
Zachary Chandos
03/28/2023
*/

#include <iostream>

void merge(int a[], int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}


void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, high, mid);
    }
    return;
}

int main()
{
     //sets the length of the array
    int length = 10;

    int a[length];
    //assigns random values to array
    for(int i = 0; i < length; i++)
    {
        a[i] = rand()%100;
    }
    
    std::cout << "Merge Sort:" << std::endl;
    //outputs unsorted array
    for(int i = 0; i < length; i++)
    {
        std::cout <<"Unsorted Array: " << "a[" << i << "] = " << a[i] << std::endl;
    }

    int low = 0; 
    int high = length - 1;

    mergeSort(a, low, high);
      //outputs sorted array
     for(int i = 0; i < length; i++)
    {
        std::cout <<"Sorted Array : " << "a[" << i << "] = " << a[i] << std::endl;
    }

    return 0;
}