class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        vector<TreeNode*> nodes;
        nodes.push_back(root);
        for (int i = 0; i < nodes.size(); i++) {
            if (nodes[i]->left)  nodes.push_back(nodes[i]->left);
            if (nodes[i]->right) nodes.push_back(nodes[i]->right);
        }
        return nodes.size(); 
    }
};
