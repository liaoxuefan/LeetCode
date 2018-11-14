//#include<iostream>
//#include<vector>
//#include<unordered_set>
//
//using namespace std;
////´íÎó½â·¨
//class Solution {
//public:
//	vector<vector<int>> res;
//	unordered_set<int> set;
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//		vector<int> vec;
//        combination(candidates,0,vec,target);
//		return res;
//    }
//	void combination(vector<int>& nums,int sum,vector<int> vec,int target){
//		if(sum==target){
//			res.push_back(vec);
//			return;
//		}
//
//		for(int i=0;i<nums.size();i++){			
//			int add=sum+nums[i];   
//
//			if(add>target||set.find(add)!=set.end()||set.find(target-add)!=set.end()){
//				return;
//			}
//			vec.push_back(nums[i]);
//			if(add!=target){
//				set.insert(add);
//			}
//			combination(nums,sum+nums[i],vec,target);
//			if(vec.size()>0){
//				vec.pop_back();
//			}
//		}
//		return;
//	}
//};