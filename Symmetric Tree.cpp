//#include<iostream>
//#include<vector>
//#include<queue>
//#include<unordered_set>
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
//    bool isSymmetric(TreeNode* root) {
//		isSymmetric(root->left,root->right);
//    }
//	bool isSymmetric(TreeNode* left,TreeNode* right){
//		if(!left&&!right){
//			return true;
//		}
//		if(left&&!right||!left&&right||left->val!=right->val){
//			return false;
//		}
//		//һֱ�ݹ���ȥ��ֻҪ�в�ͬ���ն�����false
//		return isSymmetric(left->left,right->right)&&
//			isSymmetric(left->right,right->left);
//	}
//};