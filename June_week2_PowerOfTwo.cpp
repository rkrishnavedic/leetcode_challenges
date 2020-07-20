class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(__builtin_popcountll((long long)n)==1){
            return true;
        }
        return false;
    }
};

class Solution2 {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
       while(n>1){
           if(n%2!=0){
               return false;
           }
           n=n>>1;
       }
        return true;
    }
};
