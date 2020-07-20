class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
      int ans=0;
        int n=costs.size();
        n=n>>1;
        for(int i=0;i<2*n;i++){
            ans+=costs[i][0];
        }
        vector<int> v(2*n,0);
        for(int i=0;i<2*n;i++){
            v[i]=costs[i][1]-costs[i][0];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            ans+=v[i];
        }
        return ans;}
};
