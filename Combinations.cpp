//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> res;	
//    vector<vector<int>> combine(int n, int k) {
//		vector<int> nums;
//		vector<int> vec;
//		for(int i=1;i<=n;i++){
//			nums.push_back(i);
//		}
//		comb(nums,0,vec,k);
//		return res;
//    }
//	void comb(vector<int> nums,int n,vector<int> vec,int k){
//		if(vec.size()==k){
//			res.push_back(vec);
//			return;
//		}
//		for(int i=n;i<nums.size();i++){
//			vec.push_back(nums[i]);
//			comb(nums,i+1,vec,k);
//			vec.pop_back();
//		}
//		return;
//	}
//};