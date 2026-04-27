#include <iostream>
#include <string>

using namespace std;

class Stack {
    int *arr;
    int top;
    int capacity;

    public:
        Stack(int s) {
            capacity = s;
            arr = new int[capacity];
            top = -1;
        }

        void push(int x) {
            if (top == capacity - 1) {
                cout << "Stack Overflow" << endl;
                return;
            }
            arr[++top] = x;
            cout << x << " pushed" << endl;
        }

        void pop() {
            if (top == -1) {
                cout << "Stack Underflow" << endl;
                return;
            }
            cout << arr[top--] << " popped" << endl;
        }

        void peek() {
            if (top == -1) {
                cout << "Stack is empty" << endl;
                return;
            }
            cout << "Top: " << arr[top] << endl;
        }

        void isEmpty() {
            if (top == -1)
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
        }
    };

int main() {
    int n, s;

    cout << "Enter number of operations: ";
    cin >> n;

    cout << "Enter stack capacity: ";
    cin >> s;

    Stack st(s);

    string cmd;
    
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        
        if (cmd == "push") {
            int value;
            cin >> value;

            st.push(value);
        }
        else if (cmd == "pop") {
            st.pop();
        }
        else if (cmd == "peek") {
            st.peek();
        }
        else if (cmd == "empty") {
            st.isEmpty();
        }
        else if (cmd == "end") {
            break;
        }
        else {
            cout << "Invalid operation" << endl;
        }
    }

    return 0;
}