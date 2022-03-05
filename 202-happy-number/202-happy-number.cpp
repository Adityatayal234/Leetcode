class Solution {
public:
    bool isHappy(int n) {
        int ans=0;
        int rem =0 ;
        
        set<int> s;
        
        
        while(1){
            ans = 0;
            while(n>0){
                rem = n%10;
                ans+=(rem*rem);
                n=n/10;
            }
            
            if(ans == 1)
                return true;
            
            else if(s.find(ans) != s.end())
                return false;
            s.insert(ans);
            n=ans;
          
        }   
        
        return false;
        
    }
};