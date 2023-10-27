class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> height_name;
        for(int i=0;i<names.size();i++){
            height_name[heights[i]]=names[i];
        }
        map<int,string, greater<>> sortedMap(height_name.begin(), height_name.end());
        vector<string> result;
        for (const auto& pair : sortedMap) {
            result.push_back(pair.second);
        }
        return result;
    }
};