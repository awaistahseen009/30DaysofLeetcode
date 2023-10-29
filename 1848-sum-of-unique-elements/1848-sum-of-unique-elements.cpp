class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count=0,sum=0;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j])
                    count++;
            }
        if(count<=1)
            result.push_back(nums[i]);
        }
        for(int i=0;i<result.size();i++)
            sum+=result[i];
        return sum;
    }
};