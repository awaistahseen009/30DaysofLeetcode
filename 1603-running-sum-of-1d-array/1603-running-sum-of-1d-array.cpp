class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            temp.push_back(temp[i-1]+nums[i]);
        }
        return temp;
    }
};