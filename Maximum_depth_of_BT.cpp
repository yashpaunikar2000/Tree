class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL){
            return 0;
        }
        // push first element in queue
        q.push(root);
        int height=0;
        while(!q.empty()){
            height++;
            int size=q.size();
            while(size--){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        return height;
    }
};
