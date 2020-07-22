class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<bool> visit(N,false);
        vector<set<int>> v(N);
        int n=trust.size();
        for(int i=0;i<n;i++){
            visit[trust[i][0]-1]=true;
            v[trust[i][1]-1].insert(trust[i][0]);
        }
        int ans=-1;
        for(int i=0;i<N;i++){
            if(visit[i]==false){
                if(v[i].size()==N-1){ ans=i+1;break;}
            }
        }
        return ans;
    }
};
