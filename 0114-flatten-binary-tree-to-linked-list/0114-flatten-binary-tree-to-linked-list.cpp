class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    void flatten(TreeNode* root) {
        if (root == NULL) return;   
        vector<int> ans;
        preorder(root, ans);

        
        root->left = nullptr;
        TreeNode* temp = root;

        for (int i = 1; i < ans.size(); i++) {   
            TreeNode* newnode = new TreeNode(ans[i]);
            temp->left = nullptr;
            temp->right = newnode;
            temp = newnode;
        }
    }
};