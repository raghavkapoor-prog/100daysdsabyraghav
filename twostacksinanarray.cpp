#include <iostream>
#include <vector>
using namespace std;

class TwoStacks {
private:
    int size;
    vector<int> arr;
    int top1;
    int top2;

public:
    TwoStacks(int n) : size(n), arr(n), top1(-1), top2(size) {}

    void push1(int value) {
        if (top1 < top2 - 1) {
            arr[++top1] = value;
        } else {
            std::cout << "Stack Overflow for Stack 1\n";
        }
    }

    void push2(int value) {
        if (top1 < top2 - 1) {
            arr[--top2] = value;
        } else {
            std::cout << "Stack Overflow for Stack 2\n";
        }
    }

    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            std::cout << "Stack 1 is empty\n";
            return -1; // Assuming -1 is an invalid value for the stack
        }
    }

    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            std::cout << "Stack 2 is empty\n";
            return -1; // Assuming -1 is an invalid value for the stack
        }
    }
};


int main (){
    
}