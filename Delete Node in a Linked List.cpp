//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//
//class Solution {
//public:
//	void deleteNode(ListNode* node) {
//		node->val=node->next->val;
//		ListNode* p=node->next;
//		node->next=p->next;
//		delete p;
//	}
//};
//
//int main(){
//	system("pause");
//	return 0;
//}