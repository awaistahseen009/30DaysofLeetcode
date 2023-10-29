class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size(); // Get the number of rows (assumes it's a square matrix).
        
        for (int i = 0; i < n; i++) {
            reverse(image[i].begin(), image[i].end()); // Reverse each row.
            for (int j = 0; j < n; j++) {
                image[i][j] = 1 - image[i][j]; // Invert each element.
            }
        }
        
        return image;
    }
};
