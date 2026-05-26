class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for(string& s : tokens){
        if(s == "+"){
            int var1 = st.top();
            st.pop();
            int var2 = st.top();
            st.pop();
            st.push(var2 + var1);

        }else if(s == "-"){ // sub
            int var1 = st.top();
            st.pop();
            int var2 = st.top();
            st.pop();
            st.push(var2 - var1);

            
        }else if(s == "*"){ // mult
            int var1 = st.top();
            st.pop();
            int var2 = st.top();
            st.pop();
            st.push(var2 * var1);

            
        }else if(s == "/"){ // div
            int var1 = st.top();
            st.pop();
            int var2 = st.top();
            st.pop();
            st.push(var2 / var1);

            
        }else{
        st.push(stoi(s));
        }
    }  
    return st.top();
    }
};
