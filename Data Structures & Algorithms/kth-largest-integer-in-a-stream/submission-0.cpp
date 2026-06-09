class KthLargest {
    private:
    priority_queue<int, vector<int>, greater<int>> mh;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(auto n : nums){
            mh.push(n);
            if(mh.size() > k){
                mh.pop();
            }
        }

    }
    
    int add(int val) {
        mh.push(val);
        if(mh.size()> k){
            mh.pop();
        }
        return mh.top();
    }
};
