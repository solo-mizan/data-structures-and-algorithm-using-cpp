// Bubble Sort

#include <iostream>
using namespace std;

int main () {

    int array[] = {1, 65, 5, 6, 58, 26, 8, 2, 3, 5, 8, 99, 65, 5};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++){
        cout << array[i] << " ";
    }

        return 0;
}
































// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << "enter the value of factorial";
//     cin >> n;
//     int factorial (int n){
//         if (n>1)
//             ;

//         return n * factorial(n - 1);
//         else 
//         return 1;
//     }
//     cout << "Factorial:" << factorial(n - 1);

//     return 0;
// }