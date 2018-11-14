//#include<iostream>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    bool isBalanced(TreeNode* root) {
//		if(!root){
//			return true;
//		}
//		int m,n;
//		m=depth(root->left);
//		n=depth(root->right);
//		if(abs(m-n)>1){
//			return false;
//		}
//		return isBalanced(root->left)&&isBalanced(root->right);
//    }
//	int depth(TreeNode* root){
//		if(!root){
//			return 0;
//		}
//		int m=depth(root->left);
//		int n=depth(root->right);
//		return m>n?m+1:n+1;
//	}
//};