class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {// O(n log n)time and O(n)space
        priority_queue<int> pq;
        for(auto n : stones){
            pq.push(n);
        }
        while(pq.size() > 1){
            int xstone = pq.top();
            pq.pop();
            int ystone = pq.top();
            pq.pop();
            if(xstone == ystone){
                continue;
            }
            if(xstone > ystone){
                pq.push(xstone-ystone);
            }
        }
        if(pq.empty()){
            return 0;
        }
        else{
            return pq.top();
        }
        
    }
};
