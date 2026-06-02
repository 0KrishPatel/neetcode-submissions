class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> looked;
        for(int n :nums){
            if(looked.count(n)){
                return true;
            }
            looked.insert(n);
        }
        return false;
    }
};