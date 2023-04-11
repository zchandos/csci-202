

#include <iostream>

void reverse(int intArray[], int low, int high){
    
    //base case
    if (low >= high){
        return;
    }

    int length = high + 1;

    //error handling to prevent segmentation fault
    if (low < 0 || high >= length){
        std::cout << "Invalid indices" << std::endl;
        return;
    }

    int temp = intArray[low];
    intArray[low] = intArray[high];
    intArray[high] = temp;

    reverse(intArray, low + 1, high -1);
}

int main(){

    int intArray[] =  {1, 2, 3, 4, 5, 6, 7, 8};
    int low = 1;
    int high = 6;
    int length = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Array before swap:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    reverse(intArray, low, high);

    std::cout<<"Array after swap: " << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << intArray[i] << " ";
    }
}