class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n; // base cases

        int a = 1, b = 2; // f(1)=1, f(2)=2
        for (int i = 3; i <= n; i++) {
            int temp = a + b; // f(n) = f(n-1) + f(n-2)
            a = b;
            b = temp;
        }
        return b;
    }
};
