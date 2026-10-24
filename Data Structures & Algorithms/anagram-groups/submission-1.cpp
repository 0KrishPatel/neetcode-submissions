class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        for(const string& n: strs){
            string s = n;
            sort(s.begin(),s.end());
            hash[s].push_back(n);
        }
        vector<vector<string>>res;
        for(auto& p : hash){
            res.push_back(p.second);
        }
        return res;
    }
};
