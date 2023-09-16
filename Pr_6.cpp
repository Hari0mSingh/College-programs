#include <iostream>
using namespace std;
class MyClass {
private:
    static int objectCount; // Static member variable to count objects

public:
    MyClass() {
        objectCount++; // Increment the count in the constructor
    }

    // ~MyClass() {
    //     objectCount--; // Decrement the count in the destructor
    // }

    static int getObjectCount() {
        return objectCount;
    }
};

int MyClass::objectCount = 0; // Initialize the static member variable

int main() {
    MyClass obj1; // Create the first object
    MyClass obj2; // Create the second object
    MyClass obj3; // Create the third object

    cout << "Number of objects created: " << MyClass::getObjectCount() << std::endl;

    return 0;
}
