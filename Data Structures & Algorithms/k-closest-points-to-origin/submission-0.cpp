class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //min heap
        // get the c value 
        // build a min heap
        // for loop for k times 
        priority_queue<pair<long long, pair<int,int>>,vector<pair<long long, pair<int,int>>>
> mh;
        int n = points.size();
        for(auto& p :points){
            long c = p[0] * p[0] + p[1] * p[1];
            mh.push({c,{p[0],p[1]}});
            if(mh.size() > k){
                mh.pop();
            }
        }
        vector<vector<int>> res;
        while(!mh.empty()){
            res.push_back({mh.top().second.first, mh.top().second.second});
            mh.pop();
        }
        return res;

        
    }
};
