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
//bool func(int i,int j){
//	return i>j;
//}
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		vector<int> res;
//		ListNode* head1=l1;
//		while(head1!=NULL){
//			res.push_back(head1->val);
//			head1=head1->next;
//		}
//		ListNode* head2=l2;
//		while(head2!=NULL){
//			res.push_back(head2->val);
//			head2=head2->next;
//		}
//		sort(res.begin(),res.end());
//		ListNode* head=new ListNode(0);
//		ListNode* p=head;
//		for(auto i=res.begin();i!=res.end();i++){
//			ListNode* node=new ListNode(*i);
//			p->next=node;
//			p=p->next;
//		}
//		return head->next;
//        
//    }
//};