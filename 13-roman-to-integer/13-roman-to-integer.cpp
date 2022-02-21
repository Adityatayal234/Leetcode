class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        // m['I'] = 1;
        // m['V'] = 5;
        // m['X'] = 10;
        // m['L'] = 50;
        // m['C'] = 100;
        // m['D'] = 500;
        // m['M'] = 1000;
        m.insert(pair<char,int>('I',1)); 
        m.insert(pair<char,int>('V',5)); 
        m.insert(pair<char,int>('X',10)); 
        m.insert(pair<char,int>('L',50)); 
        m.insert(pair<char,int>('C',100)); 
        m.insert(pair<char,int>('D',500)); 
        m.insert(pair<char,int>('M',1000)); 
         
        int ans = 0;
        
        for(int i=0 ; i<s.length() ; i++){
            
            if(m[s[i+1]] > m[s[i]]){
                ans+= m[s[i+1]]-m[s[i]];
                i++;
            }
            else
                ans+=m[s[i]];
        }
        return ans;
    }
};