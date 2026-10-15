class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        
        for(int i = 0; i < nums.size();i++){

            int b = target - nums[i];
            if( seen.find(b) != seen.end()){
                return {seen[b],i};
            }
            seen.insert({nums[i],i});
        }
        return {};
    }
};
