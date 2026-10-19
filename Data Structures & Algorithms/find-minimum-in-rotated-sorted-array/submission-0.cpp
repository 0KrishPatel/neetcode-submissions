class Solution {
public:
    int findMin(vector<int> &nums) {
        // bin search to find the min val
        // based on idx find wheather it roated right or left and calculate that part
        int l = 0;
        int r = nums.size()-1;
        while(l < r){
            int m = l + (r-l)/2;
            if(nums[m] > nums[r]){
                l = m +1;
            }else if(nums[m] < nums[r]){
                r = m;
            }
        }
        return nums[l];
    }
};
