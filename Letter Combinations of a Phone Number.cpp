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
//			res.push_back(s);//�洢һ�������������ַ���
//			return;
//		}
//		char c=digits[index];//��ȡdigits�е�һ�������ַ�
//		for(int i=0;i<vec[c-'0'].size();i++){//���������ַ��ҳ���Ӧ�ַ�
//			findCombinations(digits,index+1,s+vec[c-'0'][i]);//ѭ���ݹ�
//			//ʵ��ǰһ�������ַ�������ĵ�һ����ĸ���һ�������ַ��������������ĸ��ӵ�Ч��
//		}
//		return;
//	}
//};