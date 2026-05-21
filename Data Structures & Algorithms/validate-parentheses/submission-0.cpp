class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(char c : s){
            if(c == '[' || c == '{' || c == '('){
                stack.push(c);
            }else{
                if(stack.empty()){
                    return false;
                }
                char val = stack.top();
                
                if ((c == ']' && val == '[') || (c == '}' && val == '{') || (c == ')' && val == '(')) {
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
