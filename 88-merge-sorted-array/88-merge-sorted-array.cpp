class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1 ;
        int p2 = n-1;
        int back = nums1.size()-1;
        
        if(p1<0){
            nums1 = nums2;
            return;
        }
        
        while(p1>=0 && p2>=0){
            if(nums1[p1] > nums2[p2]){
                nums1[back] = nums1[p1];
                p1--;
            }
            else{
                nums1[back] = nums2[p2];
                p2--;
            }
            back--;    
        }
        while(p1>=0){
            nums1[back] = nums1[p1];
            p1--;
            back--;
        }
        while(p2>=0){
            nums1[back] = nums2[p2];
            p2--;
            back--;
        }
        
    }
};