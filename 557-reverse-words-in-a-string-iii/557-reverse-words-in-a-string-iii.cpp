class Solution {
public:
    string reverseWords(string s) {
        int l=0,r = 0;
        
        while(r <= s.length()){
            
            if(r == s.length() || s[r]==' '){
                reverse(s.begin()+l,s.begin()+r);
                l = r+1;
            }
            r++;
        }
        
        return s;
    }
};