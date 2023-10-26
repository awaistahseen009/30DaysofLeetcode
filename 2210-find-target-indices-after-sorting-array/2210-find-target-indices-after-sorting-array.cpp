class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;

        // Sort the input array in non-decreasing order
        sort(nums.begin(), nums.end());

        // Binary search for target indices
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                result.push_back(i);
            }
        }
        return result;
    }
};
