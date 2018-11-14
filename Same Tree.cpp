//#include<iostream>
//#include<vector>
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
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//		if(!p&&!q){
//			return true;
//		}
//		if(!p&&q||p&&!q){
//			return false;
//		}
//		/*if(p->val==q->val){
//			return true;
//		}else{
//			return false;
//		}*/
//		//上面错误写法（只能判别根结点，根相同都返回true），纠正如下
//		if(p->val!=q->val){
//			return false;
//		}
//		if(isSameTree(p->left,q->left)&&isSameTree(p->right,q->right)){
//			return true;
//		}else{
//			return false;
//		}
//    }
//};
//
//int main(){
//	TreeNode* p=new TreeNode(1);
//	TreeNode* pl=new TreeNode(2);
//	p->left=pl;
//	TreeNode* q=new TreeNode(1);
//	TreeNode* qr=new TreeNode(2);
//	q->right=qr;
//	cout<<Solution().isSameTree(p,q)<<endl;
//	system("pause");
//	return 0;
//}