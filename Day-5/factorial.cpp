#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int T, N;
    cin >> T; 

    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << factorial(N) << endl;
    }

    return 0;
}




