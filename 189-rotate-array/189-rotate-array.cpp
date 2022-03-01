class Solution {
public:
    void rotate(vector<int>& a, int k) {
       int n=a.size();
        k=k%n;
       
        reverse(a,0,n-k-1);
        reverse(a,n-k,n-1);
        reverse(a,0,n-1);
 
    }
    
     
    void reverse(vector<int>& a,int left,int right){
        
        while(left<right){
            swap(a[left++],a[right--]);
        }
    }
};