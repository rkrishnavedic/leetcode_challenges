class Solution {
    
    int x[4]={0,0,-1,1};
    int y[4]={-1,1,0,0};
    
public:
    
    bool recur(vector<vector<char>> board, vector<vector<bool>> &visit,string word, int j, int n, int m, int row, int col){
        
        if(j==word.size()){
         return true;
        }
        bool ans=false;
        for(int i=0;i<4;i++){
            if(row+x[i]>=0 && col+y[i]>=0 && row+x[i]<n && col+y[i]<m ){
                if(visit[x[i]+row][y[i]+col]==false && word[j]==board[x[i]+row][y[i]+col]){
                    visit[x[i]+row][y[i]+col]=true;
                    ans|=recur(board,visit, word, j+1, n, m, row+x[i], col+y[i]);
                    visit[x[i]+row][y[i]+col]=false;
                }
            }
            if(ans) break;
        }
           
      return ans;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>> visit(n,vector<bool> (m,false));
        bool ans=false;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
        if(board[row][col]==word[0]){
                visit[row][col]=true;
        ans|=recur(board, visit, word, 1, n, m, row, col);
            visit[row][col]=false;}
            }
            if(ans) break;
        }
        return ans;
    }
};

/*
Notes: In this problem I solved using backtracking and there one should note the
importance of break statements in for/while loops, 
without that I was getting TLE inspite of the correct code
*/
