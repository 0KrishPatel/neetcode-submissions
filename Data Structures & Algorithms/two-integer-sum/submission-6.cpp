class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int n = nums.size();
        for(int i =0;i < n;i++){
            int t = target-nums[i];
            if(hash.find(t) != hash.end()){
                return {hash[t],i};
            }
            hash.insert({nums[i],i});
        }
        return {};
    }
};
