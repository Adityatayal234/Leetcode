class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0, right = height.size()-1;
        int area = 0, maxwater =0;
        
        while(left < right){
            
            area = min(height[left],height[right])*(right-left);
            
            maxwater = max(area,maxwater);
            
            if(height[left] < height[right])
                left++;
            
            else
                right--;
            
        }
        
        return maxwater;
        
    }
};