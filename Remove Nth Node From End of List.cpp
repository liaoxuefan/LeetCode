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
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//		ListNode* head2=new ListNode(0);
//		ListNode* p=head2;
//		ListNode* q=head;
//		p->next=head;
//		while(n){
//			q=q->next;
//			n--;
//		}
//		while(q){
//			q=q->next;
//			p=p->next;
//		}
//		ListNode* delNode=p->next;
//		p->next=p->next->next;
//		delete delNode;
//
//		ListNode* retNode=head2->next;
//        delete head2;
//        return retNode;
//    }
//};
//
//int main(){
//	system("pause");
//	return 0;
//}