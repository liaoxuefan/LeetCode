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
//			//Ҫɾ���Ľ�������Һ���
//			temp=findMin(root->right);
//			root->val=temp->val;
//			root->right=deleteNode(root->right,root->val);
//		}else{
//			//Ҫɾ���Ľ��û��ͬʱӵ�����Һ���
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
//	TreeNode* findMin(TreeNode* root){//�ҵ�ֵ��С�Ľ��
//		TreeNode* p=root;
//		while(p->left){
//			p=p->left;
//		}
//		return p;
//	}
//};