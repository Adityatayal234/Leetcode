class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int min1=INT_MAX, max1=INT_MIN;
        bool sorted = true;
        int sizee = nums.size();
        
        for(int i=1 ; i<sizee; i++){
            //cout<<"----Inside 1st loop  "<<nums[i]<<"  "<<nums[i-1]<<endl;
            if(nums[i] < nums[i-1])
                sorted = false;
            if(!sorted){
              //   cout<<"not sorted loop ";
                min1 = min(min1,nums[i]);
               // cout<<min1<<endl;
            }
        }
        sorted = true;
        //cout<<"--------------------------"<<"\n";
        for(int i=sizee-2 ; i>=0 ; i--){
          //  cout<<"Inside 2nd loop  "<<nums[i]<<"  "<<nums[i+1]<<endl;
            if(nums[i] > nums[i+1])
                sorted = false;
            if(!sorted){
            //    cout<<"not sorted loop  ";
                max1 = max(max1,nums[i]);
             //   cout<<max1<<endl;
            }
        }
        
        int l,r;
        
        for( l=0 ; l<sizee ; l++){
            if(nums[l] > min1){
                break;
            }
        }
        
        for( r=sizee-1 ; r>=0 ; r--){
            if(nums[r] < max1){
                break;
            }       
        }
        
            
            
        cout<<min1<<"     "<<max1<<endl;
        cout<<l<<" "<<r;
    
         return r - l < 0 ? 0 : r - l + 1;
        
    }
};