class Solution {
public:
int binsear(int low,int high,vector<int>& nums,int tar){
        //binary search 
        // low mid high
        //int low = 0;
        //int hig = nums.size()-1;
        //int mid = low + (nums.size()-1)/2;
        if(low > high) return -1;
        int mid = low + (high - low) / 2;
        if(nums[mid] == tar){
            return mid;
        }
        

        if(tar > nums[mid]){// 
            return binsear(mid+1,high,nums,tar);
        }else{
            return binsear(low,mid-1,nums,tar);
        }
    }
    int search(vector<int>& nums, int target) {
        //binary search 
        return binsear(0,nums.size()-1,nums,target);
        
        
    }

};
