class Solution {
  public:
  void solve(Node* root,vector<vector<int>>&ans,vector<int>temp){
      if(root==NULL)return ;
      temp.push_back(root->data);
      if(root->left==NULL && root->right==NULL){
          ans.push_back(temp);
      }
      solve(root->left,ans,temp);
      solve(root->right,ans,temp);
  }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>>ans;//to store ultimate answer
        vector<int>temp;//to store intermediate node;
        if(root==NULL)return ans;
        solve(root,ans,temp);
        return ans;
    }
};
