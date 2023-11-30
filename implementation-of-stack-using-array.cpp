// // a program to implement stack using array.

// #include <iostream>
// using namespace std;

// // create a Stack class
// class Stack {
//     public:
//         // declare variables
//         static const int STK_SIZE = 5;
//         int stack[STK_SIZE];
//         int element;
//         int current_size = -1;

//         // push to stack method
//         void push(){
//             if(current_size == STK_SIZE){
//                 cout << "Stack is full (Overflow)." << endl;
//             }
//             else{
//                 cout << "Enter the element: ";
//                 cin >> element;
//                 current_size++;
//                 stack[current_size] = element;
//             }
//         }

//         // pop from stack method
//         void pop(){
//             int temp;
//             if(current_size == -1){
//                 cout << "Stack is already empty (Underflow)." << endl;
//             }
//             else{
//                 temp = stack[current_size];
//                 current_size--;
//                 cout << "The " << temp << " element is popped successfully.";
//             }
//         }

//         // stack element display method
//         void displayElements(){
//             cout << "Stack elements are: ";
//             for (int i = current_size; i >= 0; i--){
//                 cout << stack[i] << endl;
//             }
//         }
// };

// int main () {

//     Stack stack;

//     int choice = 1;

//     do
//     {
//          switch (choice)
//         {
//             case 1:
//                 stack.displayElements();
//                 break;

//             case 2:
//                 stack.push();
//                 break;
//             case 3:
//                 stack.pop();
//                 break;

//             default:
//                 cout << "Invalid choice." << endl;
//                 break;
//         }
//     } while (choice !=0);

//     return 0;
// }

#include <iostream>
using namespace std;

// create a Stack class
class Stack {
public:
    // declare variables
    static const int STK_SIZE = 5;
    int stack[STK_SIZE];
    int element;
    int current_size = -1;

    // push to stack method
    void push() {
        if (current_size == STK_SIZE - 1) {
            cout << "Stack is full (Overflow)." << endl;
        } else {
            cout << "Enter the element: ";
            cin >> element;
            current_size++;
            stack[current_size] = element;
            cout << endl
                 << "Item pushed successfully.";
        }
    }

    // pop from stack method
    void pop() {
        int temp;
        if (current_size == -1) {
            cout << "Stack is already empty (Underflow)." << endl;
        } else {
            temp = stack[current_size];
            current_size--;
            cout << "The " << temp << " element is popped successfully." << endl;
        }
    }

    // stack element display method
    void displayElements() {
        cout << "Stack elements are: " << endl;
        for (int i = current_size; i >= 0; i--) {
            cout << stack[i] << endl;
        }
        cout << endl;
    }
};

int main() {

    Stack stack;

    // Initialize choice to something other than 0 to enter the loop.
    int choice = -1;

    do {
        cout << "Press 1 for push to stack." << endl
             << "Press 2 displaying stack items." << endl
             << "Press 3 for pop the last item." << endl
             << endl
             << "Enter your choice (0 to exit): " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                stack.push();
                break;

            case 2:
                stack.displayElements();
                break;

            case 3:
                stack.pop();
                break;

            case 0:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }

    } while (choice != 0);

    return 0;
}