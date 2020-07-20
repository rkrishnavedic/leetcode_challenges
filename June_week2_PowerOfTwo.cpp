class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(__builtin_popcountll((long long)n)==1){
            return true;
        }
        return false;
    }
};
