//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<stack>
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
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        queue<TreeNode*> q;
//		vector<vector<int>> res;
//		if(!root){
//			return res;
//		}
//		q.push(root);
//		while(!q.empty()){
//			//Ϊÿһ�����temp
//			vector<int> temp;
//			int size=q.size();
//			//ֻ���ѭ��һ��ʼ�Ķ���Ԫ�ر����꣬ʣ���Ϊ��һ���Ԫ��
//			for(int i=0;i<size;i++){
//				TreeNode* p=q.front();
//				temp.push_back(p->val);
//				q.pop();
//				//���ϵؽ���һ��Ԫ�����
//				if(p->left){
//					q.push(p->left);
//				}
//				if(p->right){
//					q.push(p->right);
//				}				
//			}
//			res.push_back(temp);
//		}		
//		int i=0;
//		for(i;i<res.size();i++){
//			if(i%2){
//				reverse(res[i].begin(),res[i].end());
//			}
//		}
//		return res;
//    }
//};