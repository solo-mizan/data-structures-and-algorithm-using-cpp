// Linear Search

#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int item){
    for (int i = 0; i < size; i++){
        if(arr[i] == item){
            cout << "Item found at " << i << "th index.";
            return;
        }
    }
    cout << "Item could not found in the array.";
}

int main (){

    int a[] = {5, 9, 6, 8, 2, 3, 1, 4, 0};
    int size = sizeof(a) / sizeof(a[0]);

    linearSearch(a, size, 200);

    return 0;
}      