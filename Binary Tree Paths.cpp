//#include<iostream>
//#include<vector>
//#include<string>
//#include<sstream>
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
//    vector<string> binaryTreePaths(TreeNode* root) {
//		vector<string> res;
//		if(!root) return res;
//		if(!root->left&&!root->right){
//			res.push_back(invert(root->val));
//			return res;
//		}
//		vector<string> left=binaryTreePaths(root->left);
//		vector<string> right=binaryTreePaths(root->right);
//		res.insert(res.begin(),left.begin(),left.end());
//		res.insert(res.end(),right.begin(),right.end());
//		for(int i=0;i<res.size();i++){
//			res[i]=invert(root->val)+"->"+res[i];
//		}
//		return res;
//    }
//	//Êý×Ö×ª×Ö·û´®
//	string invert(int num){
//		stringstream ss;
//		ss<<num;
//		return ss.str();
//	}
//};