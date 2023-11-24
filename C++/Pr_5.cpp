#include <iostream>
#include <string>
using namespace std;

class Sales {
private:
    string SalesmanName;
    double SalesAmount;

public:
    // Member function to set the name of the salesman
    void setName(string name) {
        SalesmanName = name;
    }

    // Member function to set the sales amount
    void setSales(double sales) {
        SalesAmount = sales;
    }

    // Member function to calculate commission
    double calculateCommission() {
        if (SalesAmount >= 25000) {
            // Commission is Rs. 10 per thousand for sales >= Rs. 25000
            return (SalesAmount / 1000) * 10;
        } else {
            // Commission is Rs. 5 for sales < Rs. 25000
            return (SalesAmount / 1000) * 5;
        }
    }

    // Member function to display the commission
    void displayCommission() {
        double commission = calculateCommission();
        cout << "Commission for " << SalesmanName << ": Rs. " << commission << endl;
    }
};

int main() {
    Sales salesman;

    // Set the name of the salesman
    string name;
    cout << "Enter the name of the salesman: ";
    cin >> name;
    salesman.setName(name);

    // Set the sales amount
    double salesAmount;
    cout << "Enter sales amount: ";
    cin >> salesAmount;
    salesman.setSales(salesAmount);

    // Display the commission
    salesman.displayCommission();

    return 0;
}
