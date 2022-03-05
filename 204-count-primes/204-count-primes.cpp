class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool>prime(n+1, true);
        int count = 0;
        
        for(int i=2 ; i<sqrt(n) ; i++){
            
            for(int j=2*i ; j<n ; j=j+i)
                prime[j] = false;
        }
        
        int c=0;
        
        for(int i=2 ; i<n ; i++){
            if(prime[i])
                c++;
        }
        
        return c;
        
    }
    
};