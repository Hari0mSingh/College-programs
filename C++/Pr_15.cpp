#include <iostream>
#include <fstream>
using namespace std;
class Student {
public:
    string name;
    int age;
    double grade;

    // Default constructor
    Student() : name(""), age(0), grade(0.0) {}

    // Parameterized constructor
    Student(const string& n, int a, double g) : name(n), age(a), grade(g) {}
};

int main() {
    // Writing object to a file
    {
        // Creating an object of Student class
        Student student1("Hariom", 20, 85.5);

        // Writing the object to the file
        ofstream outFile("student.txt", ios::binary);
        if (!outFile) {
            cerr << "Error opening file for writing!" << endl;
            return 1;
        }

        outFile.write(reinterpret_cast<char*>(&student1), sizeof(Student));
        outFile.close();
    }

    // Reading object from a file
    {
        // Creating an object to store the read data
        Student student2;

        // Reading the object from the file
        ifstream inFile("student.txt", ios::binary);
        if (!inFile) {
            cerr << "Error opening file for reading!" << endl;
            return 1;
        }

        inFile.read(reinterpret_cast<char*>(&student2), sizeof(Student));
        inFile.close();

        // Displaying the read object
        cout << "Name: " << student2.name << ", Age: " << student2.age << ", Grade: " << student2.grade << endl;
    }

    return 0;
}
