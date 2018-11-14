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
//			//为每一层分配temp
//			vector<int> temp;
//			int size=q.size();
//			//只需把循环一开始的队中元素遍历完，剩余的为下一层的元素
//			for(int i=0;i<size;i++){
//				TreeNode* p=q.front();
//				temp.push_back(p->val);
//				q.pop();
//				//不断地将下一层元素入队
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