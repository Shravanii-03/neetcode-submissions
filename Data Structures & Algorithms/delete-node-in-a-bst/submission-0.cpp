
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        // If tree is empty
        if(root == NULL) {
            return NULL;
        }

        // Search in left subtree
        if(key < root->val) {
            root->left = deleteNode(root->left, key);
        }

        // Search in right subtree
        else if(key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        // Node found
        else {

            // Case 1: No left child
            if(root->left == NULL) {
                return root->right;
            }

            // Case 2: No right child
            else if(root->right == NULL) {
                return root->left;
            }

            // Case 3: Two children
            else {
                TreeNode* successor = root->right;

                while(successor->left != NULL) {
                    successor = successor->left;
                }

                root->val = successor->val;

                root->right = deleteNode(root->right, successor->val);
            }
        }

        return root;
    }
};
