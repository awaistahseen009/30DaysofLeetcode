class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int max_per=0;
  sort(nums.begin(), nums.end(), greater<int>());
 for(int i=0; i<nums.size()-2;i++) {
            if(nums[i+2]+nums[i+1] > nums[i]) {
                max_per=nums[i]+nums[i+1]+nums[i+2];
                break;
            }
        }
  return max_per;
    }
};