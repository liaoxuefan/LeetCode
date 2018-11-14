//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>//引入之后才能tokens[i] == "+"
//
//using namespace std;
//
//class Solution {
//public:
//    int evalRPN(vector<string> &tokens) {
//		if (tokens.size() == 1) return atoi(tokens[0].c_str());
//		//atoi 函数是把字符串的数字转为数字型的数值
//		//函数c_str()是获取这个字符串的首指针
//		stack<int> s;
//		for (int i = 0; i < tokens.size(); ++i) {
//			if (tokens[i] != "+" && tokens[i] != "-" &&
//				tokens[i] != "*" && tokens[i] != "/"){				　　　　　　
//				s.push(atoi(tokens[i].c_str()));
//			}else {
//				int m = s.top();
//				s.pop();
//				int n = s.top();
//				s.pop();
//				if (tokens[i] == "+") s.push(n + m);
//				if (tokens[i] == "-") s.push(n - m);
//				if (tokens[i] == "*") s.push(n * m);
//				if (tokens[i] == "/") s.push(n / m);
//			}
//		}
//        return s.top();
//    }
//};