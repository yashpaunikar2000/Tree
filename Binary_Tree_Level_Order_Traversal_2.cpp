class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         queue<TreeNode*>q;
        vector<vector<int>>ANS;
        if(root==NULL){
            return ANS;
        }
        // push first element in queue
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>ans;
            while(size--){
                TreeNode* temp=q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ANS.push_back(ans);
        }
        reverse(ANS.begin(),ANS.end());
        return ANS;
    }
};
