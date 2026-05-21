class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        int res = 0;
        for(const string& op: operations){
            if(op == "+"){
                int top = stack.top();
                stack.pop();
                int addval = top + stack.top();
                stack.push(top);
                stack.push(addval);
                res += addval;
            } 
            else if(op == "D"){
                int top = stack.top();
                top = top * 2;
                stack.push(top);
                res += top;

            }
            else if(op == "C"){
                res -= stack.top();
                stack.pop();
                
            } else{
                stack.push(stoi(op));
                res += stack.top();

            }

        }
        return res;
        
    }
};