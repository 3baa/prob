//task E
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  
    
    long long x, maximum = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (i == 0 || x > maximum) {
            maximum = x;
        }
    }
    
    cout << maximum << endl;
    return 0;
}




