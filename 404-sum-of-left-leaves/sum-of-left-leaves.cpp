class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            if (node->left) {
            
                if (!node->left->left && !node->left->right) {
                    sum += node->left->val;
                } else {
                    st.push(node->left);
                }
            }

            if (node->right) {
                st.push(node->right);
            }
        }

        return sum;
    }
};