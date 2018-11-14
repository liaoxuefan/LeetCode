//#include<iostream>
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
//    int countNodes(TreeNode* root) {
//		TreeNode* p=root;
//		TreeNode* q=root;
//		int m=0,n=0;
//		while(p){
//			m++;
//			p=p->left;
//		}
//		while(q){
//			n++;
//			q=q->right;
//		}
//		if(m==n){
//			return pow(double(2),m)-1;
//		}
//		return countNodes(root->left)+countNodes(root->right)+1;
//    }
//};