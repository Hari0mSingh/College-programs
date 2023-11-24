#include <iostream>
#include <string>

using namespace std; 

class Employee {
protected:
    string name;
    double salary;

public:
    Employee(const string& n, double s) : name(n), salary(s) {}

    string toString() const {
        return "Name: " + name + "\nSalary: $" + to_string(salary);
    }
};

class Manager : public Employee {
protected:
    string department;

public:
    Manager(const string& n, double s, const string& d) : Employee(n, s), department(d) {}

    string toString() const {
        return "Name: " + name + "\nDepartment: " + department + "\nSalary: $" + to_string(salary);
    }
};

class Executive : public Manager {
public:
    Executive(const string& n, double s, const string& d) : Manager(n, s, d) {}

    string toString() const {
        return "Executive\n" + Manager::toString();
    }
};

int main() {
    Employee employee("Hariom Singh", 7000.0);
    Manager manager("Keshav Gola", 80000.0, "Marketing");
    Executive executive("Muskan Bhatia", 100000.0, "Finance");

    cout << "Employee Information:\n" << employee.toString() << "\n\n";

    cout << "Manager Information:\n" << manager.toString() << "\n\n";

    cout << "Executive Information:\n" << executive.toString() << "\n";

    return 0;
}
