class Solution {
public:
    double power(double x, long long n) {
        if (n == 0) return 1;

        double half = power(x, n / 2);

        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }

    double myPow(double x, int n) {
        long long N = n;  // prevent overflow

        if (N < 0) {
            x = 1 / x;//make base as required
            N = -N;//make power positive
        }

        return power(x, N);
    }
};
