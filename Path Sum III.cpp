//#include<iostream>   
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
//    int pathSum(TreeNode* root, int sum) {
//		if(!root){
//			return 0;
//		}
//		int res=pathSum2(root,sum);
//		res+=pathSum(root->left,sum);
//		res+=pathSum(root->right,sum);
//		return res;
//
//    }
//	int pathSum2(TreeNode* root,int sum){
//		int res=0;
//		if(!root){
//			return 0;
//		}
//		if(root->val==sum){
//			res+=1;//加一是因为其他结点有可能是负数,加来加去可能就为所求值
//		}
//		return res+=pathSum2(root->left,sum-root->val)+pathSum2(root->right,sum-root->val);
//	}
//
//	/*int pathSum(TreeNode* root, int sum,int sums){
//		if(!root){
//			return 0;
//		}
//		if(root->val==sum){
//			return 1;
//		}
//		return pathSum(root->left,sum-root->val,sums)+pathSum(root->right,sum-root->val,sums)+
//			pathSum(root->left,sums,sums)+pathSum(root->right,sums,sums);
//	}*/
//};