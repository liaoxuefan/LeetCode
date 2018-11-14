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
//    bool hasPathSum(TreeNode* root, int sum) {
//		if(!root){
//			return false;
//		}
//		if(!root->left&&!root->right){
//			return root->val==sum?true:false;
//		}//或者下面的判断
//		/*if (!root->left&& !root->right&& root->val == sum ) 
//			return true;*/
//		return hasPathSum(root->left,sum-root->val)||
//			hasPathSum(root->right,sum-root->val);
//    }
//};
//
//int main(){
//	TreeNode* root=new TreeNode(5);TreeNode* a=new TreeNode(4);TreeNode* b=new TreeNode(11);
//	TreeNode* c=new TreeNode(7);TreeNode* d=new TreeNode(2);
//	root->left=a;a->left=b;
//	b->left=c;b->right=d;
//	cout<<Solution().hasPathSum(root,22)<<endl;
//	system("pause");
//	return 0;
//}