#include<iostream>
using namespace std;

class B;

class A {
private:
    int dataA;

public:
    A(int a) : dataA(a) {}

    // Friend function 
    friend int addData(A objA, B objB);
};

class B {
private:
    int dataB;

public:
    B(int b) : dataB(b) {}

    // Friend function 
    friend int addData(A objA, B objB);
};

int addData(A objA, B objB) {
    return objA.dataA + objB.dataB;
}

int main() {
    A objA(15);
    B objB(9);

    int sum = addData(objA, objB);

    cout << "Sum of data members: " << sum <<endl;

    return 0;
}
