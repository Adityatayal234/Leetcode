class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int ans = 0 , c=0;
        
        for(int i=0 ; i<nums.size() ; i++){
            
            if(i==0 || nums[i-1] < nums[i])
                ans = max(ans,++c);
            
            else 
                c=1;
        }
        
        return ans;
    }
};