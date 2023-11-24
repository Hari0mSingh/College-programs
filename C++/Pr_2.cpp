#include <iostream>
using namespace std;

// structure to represent a point
struct Point {
    int x;
    int y;
};

int main() {
    //  three Point variables
    Point p1, p2, p3;

    // Get user input for the first point (P1)
    cout << "Enter coordinates for P1 (X Y): ";
    cin >> p1.x >> p1.y;

    // Get user input for the second point (P2)
    cout << "Enter coordinates for P2 (X Y): ";
    cin >> p2.x >> p2.y;

    // Calculate the sum of the two points and  store them in the P3 cordinate
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    // Display the result
    cout << "Coordinates of P3(P1 + P2) are: "<< "(" << p3.x << ", "  <<p3.y <<")"<< endl;

    return 0;
}
