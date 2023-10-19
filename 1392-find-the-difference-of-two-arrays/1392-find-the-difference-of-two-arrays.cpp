class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, std::vector<int>& nums2) {
        vector<int> diff1, diff2;
        
        for (const auto& num : nums1) {
            if (find(nums2.begin(), nums2.end(), num) == nums2.end()) {
                if (find(diff1.begin(), diff1.end(), num) == diff1.end()) {
                    diff1.push_back(num);
                }
            }
        }
        
        for (const auto& num : nums2) {
            if (std::find(nums1.begin(), nums1.end(), num) == nums1.end()) {
                if (std::find(diff2.begin(), diff2.end(), num) == diff2.end()) {
                    diff2.push_back(num);
                }
            }
        }
        
        return {diff1, diff2};
    }
};
