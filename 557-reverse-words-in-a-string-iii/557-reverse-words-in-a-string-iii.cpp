class Solution {
public:
    string reverseWords(string s) {
        
        stack<int> st;
        string ans="";
        
        for(int i=0 ; i<s.length() ; i++){
            
            if(s[i]!=' '){
                st.push(s[i]);
            }
            
            else{
                while(!st.empty()){
                    char temp = st.top();
                    ans+=temp;
                    st.pop();
                }
                ans+=" ";
            }
            
        }
        while(!st.empty()){
                    char temp = st.top();
                    ans+=temp;
                    st.pop();
                }
        return ans;
    }
};