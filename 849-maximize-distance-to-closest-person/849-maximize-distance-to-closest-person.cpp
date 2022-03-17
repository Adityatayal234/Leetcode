class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int l=-1, ans=0, n = seats.size();
        
        for(int i=0 ; i<n ; i++){
            
            if(seats[i]==1){
                if(l==-1)
                    ans = i;
                else
                    ans = max(ans,(i-l)/2);
                l=i;
            }
            
        }
        
        if(seats[n-1]==0)
            ans = max(ans,n-1-l);
        return ans;
    }
};