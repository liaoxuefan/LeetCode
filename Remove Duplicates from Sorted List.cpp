//#include<iostream>
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
//    ListNode* deleteDuplicates(ListNode* head) {
//        ListNode* p=head;
//		ListNode* pre=head;
//		while(p!=NULL){
//			if(p->val==pre->val){
//				p=p->next;
//			}else{
//				pre->next=p;
//				pre=p;
//			}
//		}
//		pre->next=NULL;
//		return head;
//
//		/*
//		ListNode* p=head;
//		while(p!=NULL&&p->next!=NULL){
//			if(p->val==p->next->val){
//				p->next=p->next->next;
//			}else{
//				p=p->next;
//			}
//		}
//		return head;*/
//    }
//};
//
//int main(){
//
//
//	system("pasue");
//	return 0;
//}