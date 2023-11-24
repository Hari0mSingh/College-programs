#include<iostream>

// Base class
class Operation {
public:
    // Function to perform addition
    int add(int a, int b) {
        return a + b;
    }
};

// Derived class 
class AdditionOperation : public Operation {
public:
    void performAddition(int a, int b) {
        int result = add(a, b);
        std::cout << "The sum of " << a << " and " << b << " is: " << result << std::endl;
    }
};

int main() {
    //  object of the derived class
    AdditionOperation additionOp;

    additionOp.performAddition(5, 7);

    return 0;
}
