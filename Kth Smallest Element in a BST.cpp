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
//	vector<int> res;
//	int kthSmallest(TreeNode* root, int k) {
//		kth(root,k);
//		return res[res.size()-1];
//
//	}
//	void kth(TreeNode* root,int k){
//		if(!root){
//			return;
//		}
//		kth(root->left,k);
//		if(res.size()==k){
//			return;
//		}
//		res.push_back(root->val);		
//		kth(root->right,k);
//	}
//};