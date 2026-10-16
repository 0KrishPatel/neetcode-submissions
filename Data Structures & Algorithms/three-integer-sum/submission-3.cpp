#include <iostream>
class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        set<vector<int>> res;
        for(int num : nums){
            mp[num]++;
        }
        for (auto& p : mp) {
            cout << p.first << " : " << p.second << endl;
        }

        for(int i = 0; i < n; i++){
            mp[nums[i]]--;
            for(int j = i+1; j < n; j++){
                mp[nums[j]]--;
                int k = -(nums[i]+nums[j]);
                if(mp[k] > 0){
                    vector<int> keepsorted = {nums[i],nums[j],k};
                    sort(keepsorted.begin(),keepsorted.end());
                    res.insert(keepsorted);
                    //res.push_back({nums[i],nums[j],k});
                    //mp[nums[i]]--;
                    //mp[nums[j]]--;
                    //mp[k]--;
                }
                //sort(keepsorted.begin(),keepsorted.end());

                mp[nums[j]]++;
                

            }
            mp[nums[i]]++;

        }

        return vector<vector<int>>(res.begin(),res.end());
    }
};
