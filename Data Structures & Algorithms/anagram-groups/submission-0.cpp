class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        vector<string>vec;
        unordered_map<string, vector<string>>mp;
        for(int i=0 ; i<strs.size() ; i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            mp[word].push_back(strs[i]);

        }
        for(auto m:mp){
            vec = m.second;
            result.push_back(vec);
        }
        return result;
    }
};
