class MyStack {
public:
    int arr[101];
    int top;

    MyStack() { top = -1; }

    void push(int x) {
        arr[++top] = x;   // O(1)
    }

    int pop() {
        if (top == -1) return -1;
        return arr[top--]; // O(1)
    }
};