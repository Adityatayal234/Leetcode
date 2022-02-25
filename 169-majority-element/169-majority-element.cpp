class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1;
        int major = nums[0];
        
        for(int i=1 ; i<nums.size() ; i++){
            if(major == nums[i])
                c++;
            else
                c--;
            if(c == 0){
                major = nums[i];
                c=1;
            }
        }
        
        return major;
    }
};