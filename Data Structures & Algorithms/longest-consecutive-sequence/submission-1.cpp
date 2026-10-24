class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>hash;
        for(int i =0;i < nums.size();i++){
            hash.insert(nums[i]);
        }

        int longest = 0;
        for(auto& n : hash){
            if(hash.find(n-1) == hash.end()){
                int c =0;
                int curr =n;
                while(hash.find(curr) != hash.end()) {
                    c++;
                    curr++;
                }
                longest = max(longest,c);

            }
        }
        return longest;
    }
};
