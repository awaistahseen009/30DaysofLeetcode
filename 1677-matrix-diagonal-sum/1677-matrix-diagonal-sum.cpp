class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int diag_sum = 0;
        int n = mat.size(); // assuming mat is a square matrix

        for(int i = 0; i < n; i++) {
            diag_sum += mat[i][i]; // Primary Diagonal
            diag_sum += mat[i][n - 1 - i]; // Secondary Diagonal
        }

        // If the matrix size is odd, subtract the duplicate middle element
        if (n % 2 == 1) {
            diag_sum -= mat[n / 2][n / 2];
        }

        return diag_sum;

        }

    
};