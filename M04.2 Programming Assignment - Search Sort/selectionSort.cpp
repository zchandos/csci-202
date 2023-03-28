/*
Program to demonstrate the use of selection sort.
Zachary Chandos
03/28/2023
*/

#include <iostream>

//function loops through the array comparing the current iteration to the mid pos which keeps track of the smallest value. Once the array is looped through, if min pos does not equal the current interation, the values are swapped.
//this continues until the array is sorted in ascending order
void selectionSort(int a[], int length)
    {
     for (int i = 0; i < (length -1); i++)
     {
        int min_pos = i;
        for(int j = i + 1; j < length; j++)
        {
            if (a[j] < a[min_pos])
            {
                min_pos = j;
            }
        }
        if (min_pos != i)
        {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }
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

    std::cout << "Selection Sort:" << std::endl;
    //outputs unsorted array
    for(int i = 0; i < length; i++)
    {
        std::cout <<"Unsorted Array: " << "a[" << i << "] = " << a[i] << std::endl;
    }

    selectionSort(a, length);

    //outputs sorted array
    for(int i = 0; i < length; i++)
    {
        std::cout <<"Sorted Array : " << "a[" << i << "] = " << a[i] << std::endl;
    }

    return 0;
}
