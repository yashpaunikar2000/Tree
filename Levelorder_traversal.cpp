🧠 Thought Process
We need to visit tree nodes level by level → this is a classic BFS problem.
Use a queue to keep track of nodes at the current level.
For each level:
Process all nodes in the queue.
Push their values into a temporary list.
Enqueue their children (left, then right).
Repeat until the queue is empty.
  *************************************************************************

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
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
        return ANS;
    }
};
