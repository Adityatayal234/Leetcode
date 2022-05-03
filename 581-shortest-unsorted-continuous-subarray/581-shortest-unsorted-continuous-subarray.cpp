class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int end = -1;
        int max1 = nums[0];
        
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i] < max1)
                end = i;
            else
                max1 = nums[i];
        }
        
        int start =0;
        int min1 = nums[nums.size()-1];
        
        for(int i=nums.size()-2 ; i>=0 ; i--){
            if(nums[i] > min1)
                start = i;
            else
                min1 = nums[i];
        }
        
        return end-start+1;
        
    }
};