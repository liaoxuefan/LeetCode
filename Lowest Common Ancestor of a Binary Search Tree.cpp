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
//		//p��qΪ�����
//		if(root->val==p->val||root->val==q->val){
//			return root;
//		}
//		//p,q�ڸ������������ڸ����ͬһ��
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