class Solution {
    #include <iostream>
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(auto num : nums){
            count[num]++;
            
        }
        vector<pair<int,int>> res;
        for(auto p:count){
            res.push_back({p.second,p.first});
        }
        sort(res.rbegin(),res.rend());

        vector<int>ans;
        for(int i =0; i < k;i++){
            ans.push_back(res[i].second);
        }
        


      return ans;
    }
};
