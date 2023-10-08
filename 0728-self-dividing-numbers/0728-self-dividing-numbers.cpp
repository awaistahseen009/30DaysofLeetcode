class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        for (int i = left; i <= right; i++) {
            int temp_num = i;
            bool include = true;
            while (temp_num > 0) {
                int digit = temp_num % 10;
                if (digit == 0 || i % digit != 0) {
                    include = false;
                    break;
                }
                temp_num /= 10;
            }
            if (include) {
                nums.push_back(i);
            }
        }
        return nums;
    }
};
