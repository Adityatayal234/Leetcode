class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans;
        int low = 1, high = arr.size()-1;
        
        while(low <= high){
            int mid = (low+high)/2;
            
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                ans = mid;
                break;
            }
            if(arr[mid] < arr[mid+1])
                low = mid+1;
            else
                high = mid-1;
        }
        
        return ans;
    }
};