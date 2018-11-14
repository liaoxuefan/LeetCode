//#include<iostream>
//#include<queue>
//#include<vector>
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
//	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//		if(!root||root->val==p->val||root->val==q->val){
//			return root;
//		}
//		TreeNode* left=lowestCommonAncestor(root->left,p,q);
//		if(left&&left->val!=p->val&&left->val!=q->val){
//			return left;
//		}
//		TreeNode* right=lowestCommonAncestor(root->right,p,q);
//		if(right&&right->val!=p->val&&right->val!=q->val){
//			return right;
//		}
//		if(left&&right){
//			return root;
//		}
//		return left?left:right;
//	}
//	
//};