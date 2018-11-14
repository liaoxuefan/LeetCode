//#include<iostream>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//class Solution {
//public:
//	ListNode* removeElements(ListNode* head, int val) {	
//		while(head!=NULL&&head->val==val){
//			head=head->next;
//		}
//		if(head==NULL){
//			return NULL;
//		}
//		ListNode* p=head;
//		while(p->next!=NULL){
//			if(p->next->val==val){
//				p->next=p->next->next;
//			}else{
//				p=p->next;
//			}
//		}
//		return head;
//	}
//};
//
//int main(){
//	system("pause");
//	return 0;
//}