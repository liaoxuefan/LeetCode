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
//	TreeNode* deleteNode(TreeNode* root, int key) {
//		TreeNode* temp;
//		if(root==NULL){
//			return root;
//		}else if(key>root->val){
//			root->right=deleteNode(root->right,key);
//		}else if(key<root->val){
//			root->left=deleteNode(root->left,key);
//		}else if(root->right&&root->left){
//			//要删除的结点有左右孩子
//			temp=findMin(root->right);
//			root->val=temp->val;
//			root->right=deleteNode(root->right,root->val);
//		}else{
//			//要删除的结点没有同时拥有左右孩子
//			temp=root;
//			if(root->left==NULL){
//				root=root->right;
//			}else if(root->right==NULL){
//				root=root->left;
//			}
//			delete temp;
//		}
//		return root;	
//	}
//	TreeNode* findMin(TreeNode* root){//找到值最小的结点
//		TreeNode* p=root;
//		while(p->left){
//			p=p->left;
//		}
//		return p;
//	}
//};