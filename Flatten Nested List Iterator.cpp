//#include<iostream>
//#include<vector>
//#include<stack>
//
//using namespace std;
//
//class NestedInteger {
//public:
//	// Return true if this NestedInteger holds a single integer, rather than a nested list.
//	bool isInteger() const;
//
//	// Return the single integer that this NestedInteger holds, if it holds a single integer
//	// The result is undefined if this NestedInteger holds a nested list
//	int getInteger() const;
//
//	// Return the nested list that this NestedInteger holds, if it holds a nested list
//	// The result is undefined if this NestedInteger holds a single integer
//	const vector<NestedInteger> &getList() const;
//};
//class NestedIterator {
//private:
//	stack<NestedInteger> sta;
//public:
//	//�൱�ڵ����Ĺ��췽������Ԫ�ط������ջ��
//    NestedIterator(vector<NestedInteger> &nestedList) {
//		for(int i=nestedList.size()-1;i>=0;--i){
//			sta.push(nestedList[i]);
//		}
//    }
//	//ȡֵ���������ջ��Ԫ�ص�ֵ
//    int next() {
//		NestedInteger t=sta.top(); sta.pop();
//		return t.getInteger();		
//    }
//	//�����������ջ��Ϊ���ͷ���true����ʾ����Ԫ�ؿ���ȡֵ
//	//���ջ��Ϊ�б�����ж��η����ջ��ֱ��ջ��Ϊ����
//    bool hasNext() {
//		while(!sta.empty()){
//			NestedInteger t=sta.top();
//			if(t.isInteger()){
//				return true;
//			}
//			sta.pop();
//			for(int i=t.getList().size()-1;i>=0;--i){
//				sta.push(t.getList()[i]);
//			}
//		}
//		return false;
//	}
//};
//
//int main(){
//	vector<int> vec1;
//	vec1.push_back(0);vec1.push_back(1);vec1.push_back(2);
//	vector<vector<int>> vec;
//	vec.push_back(vec1);
//	vec1.clear();
//	vec1.push_back(2);
//	vec.push_back(vec1);
//	system("pause");
//	return 0;
//}
