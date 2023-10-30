class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLen = 0;
        int count = 0;
        
        for (const auto& rectangle : rectangles) {
            int sideLength = min(rectangle[0], rectangle[1]);
            
            if (sideLength > maxLen) {
                maxLen = sideLength;
                count = 1;
            } else if (sideLength == maxLen) {
                count++;
            }
        }
        
        return count;
    }
};
