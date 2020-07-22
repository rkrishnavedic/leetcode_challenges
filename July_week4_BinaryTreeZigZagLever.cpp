//There can be other solution to fuction that traverse in other direction itself
class Solution {
public:
    
    void maxDepth(TreeNode* head, int &depth, int height){
        if(head==NULL) return;
        depth=max(depth, height);
        maxDepth(head->left, depth, height+1);
        maxDepth(head->right, depth, height+1);
    }
    
    void zigzag(TreeNode* head, vector<vector<int>> &ans,int height, int depth){
        if(head==NULL) return ;
        //if(height>=depth) return ;
        ans[height].push_back(head->val);
        zigzag(head->left, ans, height+1, depth);
        zigzag(head->right, ans, height+1, depth);
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //int depth=0;
        if(root == NULL){vector<vector<int>> v ;return v; }
        int depth=0;
        maxDepth(root, depth, 1);
        vector<vector<int>> ans(depth);
        
        zigzag(root,ans, 0, depth);
        
        for(int i=1;i<depth;i+=2){
            reverse(ans[i].begin(),ans[i].end());
        }
        
        return ans;
    }
};
