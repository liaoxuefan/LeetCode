#include<iostream>
#include<set>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
		if(!root){
			return true;
		}
		if(isValidBST2(root->left).lower_bound(root->val)!=isValidBST2(root->left).end()){
			return false;
		}
		if(*isValidBST2(root->right).begin()<=root->val){
			return false;
		}
		return isValidBST(root->left)&&isValidBST(root->right);
    }
	set<int> isValidBST2(TreeNode* root){
		set<int> set;
		if(!root){
			return set;
		}else{
			set.insert(root->val);
		}
		set.insert(isValidBST2(root->left).begin(),isValidBST2(root->left).end());
		set.insert(isValidBST2(root->right).begin(),isValidBST2(root->right).end());
		
		return set;
	}
};

int main(){
	TreeNode* root=new TreeNode(2);
	TreeNode* rl=new TreeNode(1);
	TreeNode* rr=new TreeNode(3);
	root->left=rl;
	root->right=rr;
	cout<<Solution().isValidBST(root)<<endl;
	system("pause");
	return 0;
}