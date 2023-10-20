class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> countMap;
        unordered_set<int> uniqueCounts;
        
        // Count the occurrences of each value in the array
        for (int num : arr) {
            countMap[num]++;
        }
        
        // Check if the number of occurrences is unique
        for (const auto& pair : countMap) {
            if (uniqueCounts.find(pair.second) != uniqueCounts.end()) {
                return false; // Number of occurrences is not unique
            }
            uniqueCounts.insert(pair.second);
        }
        
        return true; // Number of occurrences is unique for all values
    }
};
