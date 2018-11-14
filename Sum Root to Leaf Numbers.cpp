//#include<iostream>
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
//    int sumNumbers(TreeNode* root) {
//		if(!root){
//			return 0;
//		}
//		vector<vector<int>> res2=sumNumber(root);
//		int n=0;
//		for(int i=0;i<res2.size();i++){
//			int m=res2[i][0];
//			for(int j=0;j<res2[i].size()-1;j++){
//				m=m*10+res2[i][j+1];
//			}
//			n+=m;
//		}
//		return n;
//    }
//	vector<vector<int>> sumNumber(TreeNode* root){
//		vector<vector<int>> vec;
//		vector<int> res;
//		if(!root){
//			return vec;
//		}
//		if(!root->left&&!root->right){
//			res.push_back(root->val);
//			vec.push_back(res);
//			return vec;
//		}
//		vector<vector<int>> left=sumNumber(root->left);
//		vector<vector<int>> right=sumNumber(root->right);
//		left.insert(left.end(),right.begin(),right.end());
//		for(int i=0;i<left.size();i++){
//			left[i].insert(left[i].begin(),root->val);
//		}
//		return left;
//	}
//};