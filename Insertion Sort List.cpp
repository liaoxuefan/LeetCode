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
//bool func(const ListNode* a,const ListNode* b){
//	return a->val < b->val;
//}
//class Solution 
//{
//public:
//    ListNode* insertionSortList(ListNode* head) 
//    {
//        if(!head)
//            return NULL;
//        vector<ListNode*> node_vec;
//        while(head)
//        {
//            node_vec.push_back(head);
//            head = head->next;
//        }
//        
//        sort(node_vec.begin(),node_vec.end(),func);
//        
//        for(int i = 1;i < node_vec.size();i++)
//        {
//            node_vec[i-1]->next = node_vec[i];
//        }
//        node_vec[node_vec.size() - 1]->next = NULL;
//        return node_vec[0];
//    }
//};
//
//int main(){
//	system("pause");
//	return 0;
//}