class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(), 1);
        vector<int> suff(nums.size(),1);
        vector<int> ans(nums.size());
        //pre[0] = 1;
        for(int i =1;i < nums.size();i++){
            pre[i] = nums[i-1] * pre[i-1];

        }
        //suff[nums.size()-1] = 1;
        for(int j = nums.size()-2;j > -1;j--){
            suff[j] = nums[j+1] * suff[j+1];
        }
        for(int i =0;i<nums.size();i++){
            ans[i] = suff[i]* pre[i];
        }
        return ans;
        
    }
};