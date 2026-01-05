class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!original) return nullptr;  
      queue<pair<TreeNode*, TreeNode*>> q;
            q.push({original, cloned});
     while (!q.empty()) {
    TreeNode* origNode = q.front().first;
     TreeNode* cloneNode = q.front().second;
     q.pop();
    if (origNode == target)  
        return cloneNode;
    if (origNode->left)
        q.push({origNode->left, cloneNode->left});
    if (origNode->right)
        q.push({origNode->right, cloneNode->right});
}
     return NULL;
    }
    };