class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        for (int i = 0; i < word1.size() && i < word2.size(); i++) {
            result+= word1[i];
            result+= word2[i];
        }
        if (word1.size() < word2.size()) {
            for (int i = word1.size(); i < word2.size(); i++) {
                result+= word2[i];
            }
        }
        if (word1.size() > word2.size()) {
            for (int i = word2.size(); i < word1.size(); i++) {
                result+= word1[i];
            }
        }
        return result;
    }
};
