class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        vector<TreeNode*> v;
        v.push_back(root);
        int depth = 0;
        while (!v.empty()) {
            depth++;
            
            vector<TreeNode*> temp;
            for (int i = 0; i < v.size(); i++) {
                if (v[i]->left)
                    temp.push_back(v[i]->left);
                if (v[i]->right)
                    temp.push_back(v[i]->right);
            }
            v = temp;
        }
        return depth;
    }
};
