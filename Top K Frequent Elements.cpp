//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<queue>
//
//using namespace std;
//
//class Solution {
//public:	
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//		unordered_map<int,int> map;
//		vector<int> res;
//		for(int i=0;i<nums.size();i++){
//			map[nums[i]]++;
//		}
//		//��С��:��С������pair������ݴ�����ֵ������
//		priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//		for(auto i=map.begin();i!=map.end();i++){
//			if(k==pq.size()&&i->second>pq.top().first){
//				pq.pop();
//				pq.push(make_pair(i->second,i->first));
//			}else if(k>pq.size()){
//				pq.push(make_pair(i->second,i->first));
//			}else{}
//		}
//		while(!pq.empty()){
//			res.push_back(pq.top().second);
//			pq.pop();
//		}
//		return res;
//    }
//};