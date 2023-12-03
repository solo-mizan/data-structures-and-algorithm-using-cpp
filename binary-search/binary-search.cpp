// Binary search

#include <iostream>
using namespace std;

void binarySearch(int arr[], int size, int searchItem){
    int start = 0;
    int end = size - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == searchItem){
            cout << "Item found at " << mid << "th index in the array.";
            return;
        }
        else if(searchItem > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout << "Item does not found in the array.";
}

int main () {

    int sortedArray[] = {1, 2, 3, 4, 6, 7, 8, 9, 11, 12, 15};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);

    // call the binarySearch function from the main
    binarySearch(sortedArray, size, 12);

    return 0;
}