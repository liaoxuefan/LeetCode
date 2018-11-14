//#include<iostream>
//#include<queue>
//#include<vector>
//#include<string>
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
//private:const string vec[10]={" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//		vector<string> res;
//public:
//	vector<string> letterCombinations(string digits) {
//		if(digits.size()==0){
//			return res;
//		}
//		findCombinations(digits,0,"");
//		return res;		
//	}
//	void findCombinations(const string &digits,int index,const string &s){
//		if(index==digits.size()){
//			res.push_back(s);//存储一个完整的所求字符串
//			return;
//		}
//		char c=digits[index];//获取digits中的一个数字字符
//		for(int i=0;i<vec[c-'0'].size();i++){//根据数字字符找出相应字符
//			findCombinations(digits,index+1,s+vec[c-'0'][i]);//循环递归
//			//实现前一个数字字符所代表的第一个字母与后一个数字字符所代表的所有字母相加的效果
//		}
//		return;
//	}
//};