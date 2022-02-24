class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar = 0;
        int ans = INT_MIN;
        
        for(int i=0 ; i<nums.size() ; i++){
            maxsofar+= nums[i];
            
            if(maxsofar < nums[i])
                maxsofar = nums[i];
            if(ans < maxsofar)
                ans = maxsofar;
        }
        return ans;
        
    }
};