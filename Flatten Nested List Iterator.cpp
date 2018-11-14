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
//	//相当于迭代的构造方法：把元素反向加入栈中
//    NestedIterator(vector<NestedInteger> &nestedList) {
//		for(int i=nestedList.size()-1;i>=0;--i){
//			sta.push(nestedList[i]);
//		}
//    }
//	//取值方法：输出栈顶元素的值
//    int next() {
//		NestedInteger t=sta.top(); sta.pop();
//		return t.getInteger();		
//    }
//	//处理方法：如果栈顶为整型返回true，表示还有元素可以取值
//	//如果栈顶为列表则进行二次反向进栈，直到栈顶为整型
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
