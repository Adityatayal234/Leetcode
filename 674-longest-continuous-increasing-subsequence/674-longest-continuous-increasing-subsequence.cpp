class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int ans = INT_MIN;
        
        for(int i=0 ; i<nums.size() ; i++){
            
            int c = 1;
            
            for(int j=i+1 ; j<nums.size() ; j++ ){
                
                if(nums[j] > nums[j-1])
                    c++;
                else
                    break;
                
            }
            ans = max(ans,c);
        }
        
        return ans;
    }
};