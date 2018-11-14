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
//
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//		TreeNode* p=root;
//		stack<TreeNode*> sta;
//		vector<int> res;
//		while(p||sta.empty()==0){
//			if(p){
//				res.insert(res.begin(),p->val);
//				sta.push(p);
//				p=p->right;
//			}else{
//				p=sta.top();
//				sta.pop();
//				p=p->left;
//			}
//		}
//		return res;
//    }
//};