/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        if (n < 0) return 0;
       
        int l = 0, r = n - 1;
       
        while (l < r) {
            if (knows(l, r)) l++;
            else r--;
        }
       
        int i = 0;
       
        while (i < n) {
            if (i != l && (knows(l, i) || !knows(i, l))) return -1;
            i++;
        }
       
        return l;
    }
};