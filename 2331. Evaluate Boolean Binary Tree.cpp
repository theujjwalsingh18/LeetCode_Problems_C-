class Solution {
<<<<<<< HEAD
 public:
 
  bool evaluateTree(TreeNode* root) {

    if (root->val < 2){
      return root->val;
    }

    if (root->val == 2){
      return evaluateTree(root->left) || evaluateTree(root->right);
    }

    return evaluateTree(root->left) && evaluateTree(root->right);
  }

};
=======

 public:

  bool evaluateTree(TreeNode* root) {

    if (root->val < 2)

      return root->val;

    if (root->val == 2)  // OR

      return evaluateTree(root->left) || evaluateTree(root->right);



    return evaluateTree(root->left) && evaluateTree(root->right);

  }

};
>>>>>>> 7fb8d66c57ff7299d6acf1edb78acfbe651ee82a
