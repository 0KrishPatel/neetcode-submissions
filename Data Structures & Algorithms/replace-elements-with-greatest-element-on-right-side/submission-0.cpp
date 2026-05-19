class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int init = -1;
        for(int i = arr.size()-1;i >=0 ; i--){
            int curval = arr[i];
            arr[i] = init;
            init = max(curval,init);
        }
        return arr;
    }
};