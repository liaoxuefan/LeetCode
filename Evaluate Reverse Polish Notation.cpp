//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>//����֮�����tokens[i] == "+"
//
//using namespace std;
//
//class Solution {
//public:
//    int evalRPN(vector<string> &tokens) {
//		if (tokens.size() == 1) return atoi(tokens[0].c_str());
//		//atoi �����ǰ��ַ���������תΪ�����͵���ֵ
//		//����c_str()�ǻ�ȡ����ַ�������ָ��
//		stack<int> s;
//		for (int i = 0; i < tokens.size(); ++i) {
//			if (tokens[i] != "+" && tokens[i] != "-" &&
//				tokens[i] != "*" && tokens[i] != "/"){				������������
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