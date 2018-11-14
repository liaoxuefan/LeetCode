//#include<iostream>
//#include<vector>
//#include<queue>
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
//    TreeNode* invertTree(TreeNode* root) { 
//		if(root==NULL){
//			return NULL;
//		}
//		invertTree(root->left);
//		invertTree(root->right);
//		//自底向上交换结点
//		swap(root->left,root->right);
//		return root;
//    }
//};