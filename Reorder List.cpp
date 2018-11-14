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
//    void reorderList(ListNode* head) {
//		if(head==NULL||head->next==NULL||head->next->next==NULL){
//			return;
//		}
//		ListNode* fast=head;
//		ListNode* slow=head;
//		while(fast->next&&fast->next->next){
//			slow=slow->next;
//			fast=fast->next->next;
//		}
//		ListNode* p=slow->next;
//		while(p->next){
//			ListNode* q=p->next;
//			p->next=q->next;
//			q->next=slow->next;
//			slow->next=q;
//		}
//		p=slow->next;
//		ListNode* pre=head;
//		while(pre!=slow&&p!=NULL){
//			ListNode *q=p->next;
//			slow->next=q;
//			p->next=pre->next;
//			pre->next=p;
//			pre=pre->next->next;
//			p=q;
//		}
//		return;
//    }
//};