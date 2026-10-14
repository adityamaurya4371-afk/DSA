class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a = 0;
        int b = 1;
        int c = 1;
        int sum = a + b + c;

        while (sum < n) {
            a = b;
            b = c;
            c = a + b;
            sum = a + b + c;
        }

        return sum == n;
    }
};