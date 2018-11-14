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
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//		//p或q为根结点
//		if(root->val==p->val||root->val==q->val){
//			return root;
//		}
//		//p,q在根结点两侧或者在根结点同一侧
//		if((p->val<root->val&&q->val>root->val)||(q->val<root->val&&p->val>root->val)){
//			return root;
//		}else if(p->val<root->val&&q->val<root->val){
//			return lowestCommonAncestor(root->left,p,q);
//		}else if(p->val>root->val&&q->val>root->val){
//			return lowestCommonAncestor(root->right,p,q);
//		}		
//    }
//	
//};