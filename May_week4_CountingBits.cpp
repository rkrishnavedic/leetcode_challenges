class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> dp(n+1,0);
        
        dp[0]=0;
        if(n>0) dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=dp[i>>1];
            if((i)%2==1){
                dp[i]+=1;
            }
        }
        
        return dp;
    }
};
