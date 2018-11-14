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
//    vector<int> rightSideView(TreeNode* root) {
//		vector<int> res;
//		if(!root){
//			return res;
//		}
//		queue<TreeNode*> q;
//		q.push(root);
//		while(!q.empty()){
//			res.push_back(q.front()->val);
//			int size=q.size();
//			for(int i=0;i<size;i++){
//				TreeNode* p=q.front();
//				q.pop();
//				if(p->right){
//					q.push(p->right);
//				}
//				if(p->left){
//					q.push(p->left);
//				}
//			}
//		}
//		return res;
//    }
//};