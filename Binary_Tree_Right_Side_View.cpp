class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
    queue<TreeNode*>q;
    vector<int>ans;
    if(root==NULL)return ans;
    q.push(root);
    while(!q.empty()){
        ans.push_back(q.front()->val);//*imp*
        int size=q.size();
        while(size--){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->right)q.push(temp->right);
            if(temp->left)q.push(temp->left);
        }
    }
        return ans;   
    }
};
