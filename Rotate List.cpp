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
////反转单链表
//ListNode* ReverseList(ListNode* head)
//{
//	ListNode* p = head;
//	ListNode* q = NULL; 
//	while (p != NULL)
//	{
//		ListNode* next = p->next;
//		p->next = q;
//		q = p; 
//		p = next;
//	} 
//	return q;
//}
//
//class Solution {
//public:
//    ListNode* rotateRight(ListNode* head, int k) {
//		if(head==NULL||head->next==NULL||k==0){
//			return head;
//		}
//		ListNode* p=head;
//		ListNode* q=head;
//		int len=0;
//		while(q){
//			q=q->next;
//			len++;
//		}
//		k=k%len;
//		if(k==0){
//			return head;
//		}
//		q=head;
//		while(k+1){
//			q=q->next;
//			k--;
//		}
//		while(q){
//			p=p->next;
//			q=q->next;
//		}
//		ListNode* node=p->next;
//		q=node;
//		p->next=NULL;
//		while(q->next){
//			q=q->next;
//		}
//		q->next=head;
//		return node;
//    }
//};