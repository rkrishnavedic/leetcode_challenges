class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        if(n==0) return 0;
        int m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int> (m, 0));
        int ans=0;
        for(int row=0;row<n;row++){
            if(matrix[row][0]=='1') dp[row][0]=1;
            ans=max(ans, dp[row][0]);
        }
        for(int col=0;col<m;col++) {if(matrix[0][col]=='1') dp[0][col]=1;
                                   ans=max(ans, dp[0][col]);}
        for(int row=1;row<n;row++){
            for(int col =1; col<m;col++){
                if(matrix[row][col]=='1') dp[row][col]=1+ min(dp[row-1][col], min(dp[row][col-1],dp[row-1][col-1]));
            
            ans=max(ans, dp[row][col]);}
        }
        return ans*ans;
    }
};

//Hint: Errichto video on the April Challenges
