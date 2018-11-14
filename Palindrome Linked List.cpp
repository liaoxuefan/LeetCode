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
//ListNode* reverseList(ListNode* head){
//	if(head==NULL||head->next==NULL){
//		return head;
//	}
//	ListNode* p=NULL;
//	ListNode* q=head;
//	while(q){
//		ListNode* next=q->next;
//		q->next=p;
//		p=q;
//		q=next;
//	}
//	return p;
//}
//
//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//		if(head==NULL||head->next==NULL){
//			return true;
//		}
//		ListNode* fast=head;
//		ListNode* slow=head;
//		while(fast->next&&fast->next->next){
//			slow=slow->next;
//			fast=fast->next->next;
//		}
//		ListNode* last=slow->next;
//		while(last->next){
//			ListNode* tmp=last->next;
//			last->next=tmp->next;
//			tmp->next=slow->next;
//			slow->next=tmp;
//		}
//		ListNode* pre=head;
//		while(slow->next){
//			slow=slow->next;
//			if(pre->val==slow->val){
//				pre=pre->next;
//				
//			}else{
//				return false;
//			}
//		}
//		return true;
//    }
//};