#include <iostream>
#include <conio.h>  

using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() {
        totalCars = 0;
        totalCash = 0.0;
    }

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Total Cash: $" << totalCash << endl;
    }
};

int main() {
    TollBooth tollBooth;

    char key;
    while (true) {
        cout << "Press 'P' for paying car, 'N' for non-paying car, or 'ESC' to exit: ";

        //getch() to capture the key without waiting for Enter
        key = _getch();

        switch (key) {
            case 'P':
            case 'p':
                tollBooth.payingCar();
                cout << "Paying car counted." << endl;
                break;
            case 'N':
            case 'n':
                tollBooth.nopayCar();
                cout << "Non-paying car counted." << endl;
                break;
            case 27:  // ASCII value for 'ESC' key
                cout << "Exiting program. ";
                tollBooth.display();
                return 0;
            default:
                cout << "Invalid input. Please try again." << endl;
        }
    }
}
