// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
    	int curmax = -1, ans = -1;
    	
    	for(int i=0 ; i<arr_size ; i++){
    	    if(curmax < arr[i]){
    	        ans = curmax;
    	        curmax = arr[i];
    	    }
    	    else if(arr[i]!= curmax){
    	        if(ans == -1 || arr[i] > ans)
    	            ans = arr[i];
    	    }
    	}
    	return ans;
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends