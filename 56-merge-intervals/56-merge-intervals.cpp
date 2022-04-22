class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& itr) {
        
        vector<vector<int>> ans ;
        vector<int> temp ;
        
        if(itr.size()==0)
            return itr;
        
        sort(itr.begin(),itr.end());
        temp = itr[0];
        
        for(auto it : itr){
            
            if(temp[1]>=it[0])
                temp[1] = max(temp[1],it[1]);
            else{
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;

    }
};