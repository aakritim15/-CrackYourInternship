class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for (char c:s) {
            if (c=='(') 
                v.push(')');
            else if(c=='{') 
                v.push('}');
            else if (c=='[') 
                v.push(']');
            else if (v.empty()||v.top()!=c) 
                return false;
            else 
                v.pop();
        }
        return v.empty();
    }
};