#include <iostream>
using namespace std;

int main() {
    double v, t, a;

    cout << "Enter velocity (v): ";
    cin >> v;

    cout << "Enter time (t): ";
    cin >> t;

    cout << "Enter acceleration (a): ";
    cin >> a;

    double distance = v * t + (a * t * t) / 2;

    cout << "Distance traveled: " << distance << " units." << endl;

    return 0;
}