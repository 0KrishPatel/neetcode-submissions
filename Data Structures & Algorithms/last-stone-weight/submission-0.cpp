class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for(auto st : stones){
            maxheap.push(st);
        }
        while(maxheap.size() > 1){
            auto frt = maxheap.top();
            maxheap.pop();
            auto snd = maxheap.top();
            maxheap.pop();
            if(snd < frt){
                maxheap.push(frt-snd);
            }
            // }else if (snd == fst){
            //     break;
            // }
        }
        maxheap.push(0);
        return maxheap.top();
    }
};
