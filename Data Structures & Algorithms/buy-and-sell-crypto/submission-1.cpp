class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto maxs = 0;
        auto mins = prices[0];

        for (int& s : prices) {
            maxs = max(maxs,s-mins);
            mins = min(mins,s);
        }
        return maxs;
    }
};
