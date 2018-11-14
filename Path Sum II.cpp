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
//	
//    vector<vector<int>> pathSum(TreeNode* root, int sum) {
//		vector<vector<int>> vec;
//        vector<int> res;
//		if(!root){
//			return vec;
//		}
//		if(!root->left&&!root->right&&root->val==sum){
//			res.push_back(root->val);
//			vec.push_back(res);
//			return vec;			
//		}
//		vector<vector<int>> left=pathSum(root->left,sum-root->val);
//		vector<vector<int>> right=pathSum(root->right,sum-root->val);
//		left.insert(left.end(),right.begin(),right.end());
//		for(int i=0;i<left.size();i++){
//			left[i].insert(left[i].begin(),root->val);
//		}
//		return left;
//    }
//};