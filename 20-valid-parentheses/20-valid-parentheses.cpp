class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        char x;
        
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                
                if(st.empty()==true)
                    return false;
                else 
                    switch(s[i]){
                            
                        case ')':
                            x=st.top();
                            st.pop();
                            if(x=='{' || x=='[')
                                return false;
                            break;
                            
                         case ']':
                            x=st.top();
                            st.pop();
                            if(x=='{' || x=='(')
                                return false;
                            break;
                         
                         case '}':
                            x=st.top();
                            st.pop();
                            if(x=='(' || x=='[')
                                return false;
                            break;
    
                    }
                
            }
        }
        
        return (st.empty()==true);
    }
};