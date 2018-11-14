//#include<iostream>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//ListNode* createList(int arr[],int n){
//		ListNode* head=new ListNode(arr[0]);
//		ListNode* curNode=head;
//		for(int i=1;i<n;i++){
//			curNode->next=new ListNode(arr[i]);
//			curNode=curNode->next;
//		}
//		return head;
//}
//void printList(ListNode* head){
//	ListNode* cur=head;
//	while(cur!=NULL){
//		cout<<cur->val<<"->";
//		cur=cur->next;
//	}
//	cout<<"NULL"<<endl;
//}
//void delList(ListNode* head){
//	while(head!=NULL){
//		ListNode* delNode=head;
//		head=head->next;
//		delete delNode;
//	}
//}
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {     
//		ListNode* pre=NULL;
//		ListNode* cur=head;	
//		while(cur!=NULL){
//			ListNode* front=cur->next;
//			cur->next=pre;
//			pre=cur;
//			cur=front;        
//		}
//		return pre;
//	}
//};
//
//int main(){
//	int a[]={1,2,3,4,5};
//	int n=sizeof(a)/sizeof(int);
//	ListNode* head=createList(a,n);
//	printList(head);
//	ListNode* head2=Solution().reverseList(head);
//	printList(head2);
//	system("pause");
//	return 0;
//}