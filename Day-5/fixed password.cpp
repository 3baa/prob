#include <iostream>
using namespace std;

int main() {
    int X;
    while (cin >> X) {       // يقرأ لحد ما فيه إدخال
        if (X == 1999) {
            cout << "Correct" << endl;
            break;           // يوقف البرنامج
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}






