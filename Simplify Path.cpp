//#include<iostream>
//#include<stack>
//#include<string>
//#include<sstream>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//public:
//    string simplifyPath(string path) {
//        string res, t;
//        stringstream ss(path);
//        vector<string> v;
//        while (getline(ss, t, '/')) {
//			//从输入流中取字符，遇见'/'停止，将其赋给t
//			//当输入流无效时退出while循环
//            if (t == "" || t == ".") continue;
//            if (t == ".." && !v.empty()) v.pop_back();
//            else if (t != "..") v.push_back(t);
//        }
//		for(auto i=v.begin();i!=v.end();i++) res += "/" + *i;
//        return res.empty() ? "/" : res;
//    }
//};
//
//int main(){
//	cout<<Solution().simplifyPath("/a/./")<<endl;
//	system("pause");
//	return 0;
//}
//
