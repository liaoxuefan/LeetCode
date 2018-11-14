//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<string>> partition(string s) {
//      vector<vector<string>> res;
//		vector<string> vec;
//		partition(s,res,vec);
//		return res;
//    }
//	void partition(string s,vector<vector<string>>& res,vector<string> vec){
//		for(int i=1;i<=s.size();i++){
//			string temp=s.substr(0,i);
//			if(!isPalindrome(temp)){
//				continue;//这里不能用break，break会回到上一层循环，到这里还不能回去
//			}else{
//				vec.push_back(temp);
//			}
//			if(s.substr(i)==""){
//				res.push_back(vec);
//				break;
//			}
//			partition(s.substr(i),res,vec);
//			vec.erase(vec.end()-1);
//		}
//	}
//	bool isPalindrome(string s){
//		string r=s;
//		reverse(r.begin(),r.end());//字符串反转
//		
//		return s.compare(r)==0?true:false;//比较两个字符串是否相等
//	}
//};