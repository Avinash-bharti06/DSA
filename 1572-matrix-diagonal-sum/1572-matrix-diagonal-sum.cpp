class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        int i = 0;
        int j = n - 1;

        for (int k = 0; k < n; k++) {
            sum += mat[i][j] + mat[i][i];

            i++;
            j--;
        }

        // Center element was added twice
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};