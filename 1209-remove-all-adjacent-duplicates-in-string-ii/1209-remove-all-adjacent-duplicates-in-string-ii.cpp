class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<int> sta;
        
        for(int i=0 ; i<s.size() ; i++){
            if(i==0 || s[i] != s[i-1])
                sta.push(1);
            else if(++sta.top() == k){
                sta.pop();
                s.erase(i-k+1,k);
                i = i-k;
            }
        }
        return s;
    }
};