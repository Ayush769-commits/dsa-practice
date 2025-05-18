#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter your age: ";
    cin >> x;

    if (x < 18) {
        cout << "You are not eligible for the job." << endl;
    } 
    else {
        cout << "You are eligible for the job." << endl;

        if (x >= 54 && x <= 60) {
            cout << "But you will retire soon." << endl;
        } 
        else if (x > 60) {
            cout << "Actually, you are not eligible because you are over the retirement age." << endl;
        }
    }

    cout << "Thank you for your time." << endl;
    return 0;
}
