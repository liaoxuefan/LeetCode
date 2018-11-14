//#include<iostream>
//#include<string>
//#include<vector>
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
//	vector<string> restoreIpAddresses(string s) {
//		vector<string> res;
//		restoreIp(s,0,"",res);
//		return res;
//	}
//	//如何取ip地址的某一位：一次先截取一个字符，再判断，如果判断符合则递归取下一位，
//	//不符则回到上一次递归，四位都符合之后加入res中，res需要加&
//	void restoreIp(string s,int n,string out,vector<string>& res){
//		if(n==4){
//			if(s.empty()==0){
//				res.push_back(out);
//			}
//		}else{
//			for(int i=1;i<4;i++){
//				if(s.size()<i){
//					break;
//				}
//				int val=atoi(s.substr(0,i).c_str());
//				if(val>255||std::to_string(long long(val)).size()!=i){
//					break;
//				}
//				restoreIp(s.substr(i),n+1,out+s.substr(0,i) + ((n==3)? "":"."),res);
//			}
//		}
//	}
//};
//
//int main(){
//	system("pause");
//	return 0;
//}