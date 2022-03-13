class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        int lis[n];
       //  memset(lis,1,sizeof(lis));
       // // lis[0] = 1;
        
        for(int i=0 ; i<n ; i++)
            lis[i] = 1;
        
        for(int i=1 ; i<nums.size() ; i++){
            for(int j=0 ; j<i ; j++){
                if(nums[i]> nums[j] && lis[j]>=lis[i])
                    lis[i] = lis[j]+1;
            }
        }
        
        sort(lis,lis+n);
        return lis[n-1];
    }
};