class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend()); // easy solutions 
        // O(nlogn) time and no space;
        return nums[k-1];
    }
};
