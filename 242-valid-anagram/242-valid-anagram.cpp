class Solution {
public:
    
    bool isAnagram(string s, string t) {
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         return s==t;
        
        if(s.length() != t.length())
            return false;
        
        map<int,int> m;
        
        
        for(int i=0 ; i<s.length() ; i++){
            cout<<s[i]-'a';
            m[s[i]]++;
        }
        
        for(int i=0 ; i<t.length() ; i++){
            m[t[i]]--;
        }
        
        for(int i=0 ; i<s.length() ; i++)
            if(m[s[i]] != 0)
                return false;
        
        return true;
        
    }
};