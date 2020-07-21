class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(n<=2) return true;
        sort(coordinates.begin(),coordinates.end(),[](vector<int> a, vector<int> b){
            if(a[0]==b[0]) return a[1]<b[1];
            return a[0]<b[0];
        });
        int x,y;
        int x1,y1;
        x=coordinates[0][0];
        y=coordinates[0][1];
        x1=coordinates[1][0];
        y1=coordinates[1][1];
        if(x==x1){
            for(int i=2;i<coordinates.size();i++){
                if(x!=coordinates[i][0]){
                    return false;
                }
            }
            return true;
        }
        else{
            for(int i=2;i<n;i++){
                if((y-y1)*(coordinates[i][0]-x) != (coordinates[i][1]-y)*(x-x1)) return false;
            }
            return true;
        }
    }
};
