class Solution {
public:
    bool isPalindrome(string s) {
        
        string filterstring,reversestring;
        
        for(auto c:s){
            if(isalnum(c))
                filterstring+=tolower(c);
        }
        
        reversestring = filterstring;
        reverse(reversestring.begin(),reversestring.end());
        
        return reversestring == filterstring;
        
    }
};