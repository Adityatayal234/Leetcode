class Solution {
public:
    bool isArmstrong(int n) {
        int num = 0;
        int original = n;
        
        while(n>0){
            num++;
            n = n/10; 
        }
        cout<<num;
        n =original;
        int ans=0;
        
        while(n>0){
            
            int rem = n%10;
            ans+=pow(rem,num);
            n = n/10;
        }
        
        if(ans == original)
            return true;
        else
            return false;
        
    }
};