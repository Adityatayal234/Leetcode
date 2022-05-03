class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int end = -1;
        int max1 = nums[0];
        
      
        for(int i=1 ; i<nums.size() ; i++){ // loop for l->r
            
            if(nums[i] < max1)    // check if nums[i] i.e current element is smaller than the                                        previous element for max
                end = i;
            else
                max1 = nums[i];
        }
        
        int start =0;
        int min1 = nums[nums.size()-1];
        
        for(int i=nums.size()-2 ; i>=0 ; i--){ // loop for r->l
            
            if(nums[i] > min1)  // check if nums[i] i.e current element is larger than the                                        previous right element for max
                start = i;
            else
                min1 = nums[i];
        }
        
        return end-start+1;
        
    }
};