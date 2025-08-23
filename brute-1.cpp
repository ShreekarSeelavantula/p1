class MyStack {
public:
    int arr[101];   // array to store stack elements
    int top;

    // constructor
    MyStack() {
        top = -1;
    }

    // Function to push an integer into the stack.
    void push(int x) {
        arr[++top] = x;
    }

    // Function to remove an item from top of the stack.
    int pop() {
        if (top == -1) return -1;  // stack empty
        return arr[top--];
    }
};