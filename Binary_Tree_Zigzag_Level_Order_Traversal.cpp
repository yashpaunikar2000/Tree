class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ANS;
        if(!root)return ANS;
        int level=1;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>ans;
            while(size--){
                TreeNode* temp=q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left)q.push(temp->left); 
                if(temp->right)q.push(temp->right);
            }
            level++;
            if(level%2==0){
                ANS.push_back(ans);
            }else{
                reverse(ans.begin(),ans.end());
                ANS.push_back(ans);
            }
        }
        return ANS;
    }
};
