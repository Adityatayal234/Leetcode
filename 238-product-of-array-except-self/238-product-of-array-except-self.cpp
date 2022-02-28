class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int product =1;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            product*=nums[i];
            ans.push_back(product);
        }
        
        product=1;
        for(int i=nums.size()-1; i>0 ; i--){
            ans[i] = product*ans[i-1];
            product*=nums[i];
        }
        
        ans[0] = product;
        return ans;
    }
};