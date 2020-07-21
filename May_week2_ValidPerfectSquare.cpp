class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int start=1;
        int end=100000;
        int ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            if((long long)mid*mid <= num){
                start=mid+1;
                ans=mid;
            }
            else{
                end=mid-1;
            }
        }
        if(ans*ans==num) return true;
        return false;
    }
};
