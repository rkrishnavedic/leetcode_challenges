class Solution {
    int x[4]={-1,1,0,0};
    int y[4]={0,0,1,-1};
public:
    
    void floodfill_help(vector<vector<int>> &image, int sr, int sc, int c, int n, int m, int pix){
        image[sr][sc]=c;
        for(int i=0;i<4;i++){
            if(x[i]+sr<n && x[i]+sr>=0 && y[i]+sc>=0 && y[i]+sc<m){
                if(image[x[i]+sr][y[i]+sc]==pix) floodfill_help(image, sr+x[i], y[i]+sc, c, n, m,pix);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int pix=image[sr][sc];
        if(pix==newColor) return image;
        int n=image.size();
        int m=image[0].size();
        floodfill_help(image,sr , sc, newColor, n, m,pix);
        return image;
    }
};
