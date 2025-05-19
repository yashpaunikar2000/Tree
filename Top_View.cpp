class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        queue<pair<Node*,int>>q;
        map<int,int>mp;//bcz i need in sorted order like -2 -1 0 1 2 3 4
        vector<int>ans;
        if(!root){
            return ans;//empty vector
        }
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            Node* temp=it.first;
            int idx=it.second;
            if(mp.find(idx)==mp.end()){
                mp[idx]=temp->data;
            }
            if(temp->left){
                q.push({temp->left,idx-1});
            }
             if(temp->right){
                q.push({temp->right,idx+1});
            }
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
