#include <iostream>
using namespace std;

class Time {
private:
    int Hours;
    int Minutes;
    int Seconds;

public:
    // Member function to get time from the user
    void getTime() {
        cout << "Enter time (HH MM SS): ";
        cin >> Hours >> Minutes >> Seconds;
    }

    // Member function to display time on the screen
    void displayTime() {
        cout << "Time: " << Hours << " hours " << Minutes << " minutes " << Seconds << " seconds" << endl;
    }

    // Member function to calculate the sum of two time objects
    Time addTime(const Time& t2) {
        Time sum;
        sum.Seconds = Seconds + t2.Seconds;
        sum.Minutes = Minutes + t2.Minutes + sum.Seconds / 60;
        sum.Hours = Hours + t2.Hours + sum.Minutes / 60;
        sum.Seconds %= 60;
        sum.Minutes %= 60;
        return sum;
    }
};

int main() {
    Time t1, t2, result;

    // Get time from the user for t1 and t2
    cout << "Enter the first time:" << endl;
    t1.getTime();
    cout << "Enter the second time:" << endl;
    t2.getTime();

    // Calculate the sum of t1 and t2
    result = t1.addTime(t2);

    // Display the result
    cout << "Sum of the two times:" << endl;
    result.displayTime();

    return 0;
}
