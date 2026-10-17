class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // int sum = 0;
        // auto maxsum = 0;
        // int a;
        // auto minsum = 1000000000;
        // for(int n : piles){
        //     sum += n;
        //     if(h == piles.size()){
        //         maxsum = max(maxsum,n);
        //         a = maxsum;
        //     }else if(h >piles.size()){       
        //         //minsum = min(minsum,n);
        //         //a = minsum;
        //     }
        // }
        // return a;
        int n = piles.size();
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        int res = r;
        while(l <= r){
            int k = (l+r)/2;
            auto ttime = 0;
            for(int i = 0;i < n;i++){
                ttime += ceil(static_cast<double>(piles[i])/k);
            }
            if(ttime <= h){
                res = k;
                r = k-1;
            }
            else{
                l = k+1;
            }
        }
        return res;

    }
};
