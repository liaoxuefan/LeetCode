//#include<iostream>
//#include<stack>
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
//void preorder(TreeNode* root,vector<int>& res){
//	if(root){
//		res.push_back(root->val);
//		preorder(root->left,res);
//		preorder(root->right,res);
//	}
//}
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//		TreeNode* p=root;
//		stack<TreeNode*> sta;
//		vector<int> res;
//		while(p||sta.empty()==0){
//			if(p){
//				sta.push(p);
//				res.push_back(p->val);
//				p=p->left;
//			}else{
//				p=sta.top();
//				sta.pop();
//				p=p->right;
//			}
//		}
//		return res;
//	}
//};