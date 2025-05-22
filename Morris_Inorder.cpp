class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* curr=root;
        vector<int>ans;
        while(curr!=NULL){
            //if left is NULL
            if(curr->left==NULL){
                //push into the vector
                ans.push_back(curr->val);
                //L done V done now R (move to the right side)
                curr=curr->right;
            }else{
                // if left is NOT NULL
                TreeNode* leftchild=curr->left;
                while(leftchild->right!=NULL){
                    leftchild=leftchild->right;
                }
                // once leftchild reach at NULL, point it to curr node
              // and make NULL to left part after storing the left pointer
                leftchild->right=curr;
                TreeNode* temp=curr;
                curr=curr->left;
                temp->left=NULL;
            }
        }
        return ans;
    }
};

// TC:-- O(n)
// SC:-- O(1)
