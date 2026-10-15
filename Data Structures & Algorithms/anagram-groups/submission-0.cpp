class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> st;
        for(int i =0;i < strs.size();i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            st[key].push_back(strs[i]);
        }
        vector<vector<string>> answer;
        for(auto& s: st){
            answer.push_back(s.second);
        }
        return answer;
    } 
};