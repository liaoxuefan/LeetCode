//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isValid(string s) {
//        int i=0;
//		vector<char> res;
//		while(i<s.size()){
//			switch(s[i]){
//			case '(':
//			case '{':
//			case '[':
//				res.push_back(s[i]);
//				break;
//			case ')':
//				if(i>0&&res[res.size()-1]=='('){
//					res.pop_back();
//				}else{
//					return false;
//				}
//				break;
//			case ']':
//				if(i>0&&res[res.size()-1]=='['){
//					res.pop_back();
//				}else{
//					return false;
//				}
//				break;
//			case '}':
//				if(i>0&&res[res.size()-1]=='{'){
//					res.pop_back();
//				}else{
//					return false;
//				}
//			}
//            i++;
//		}
//		if(res.size()!=0){
//			return false;
//		}
//		return true;
//    }
//};
//
//int main(){
//	string s="()[]{}";
//	cout<<Solution().isValid(s)<<endl;
//	system("pause");
//	return 0;
//}