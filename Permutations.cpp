//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<unordered_set>
//
//using namespace std;
//
//class Solution {
//private:
//	vector<vector<int>> res;
//	vector<bool> isVisited;
//	unordered_set<int> set;
//public:
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//		isVisited=vector<bool>(false,nums.size());
//		vector<int> vec;
//		func(nums,0,vec,"");
//		return res;
//    }
//	void func(vector<int>& nums,int index,vector<int> vec,string s){
//		if(index==nums.size()){
//			if(set.find(atoi(s.c_str()))==set.end()){
//				set.insert(atoi(s.c_str()));
//				res.push_back(vec);
//			}
//			return;
//		}
//		for(int i=0;i<nums.size();i++){
//			if(!isVisited[i]){
//				vec.push_back(nums[i]);
//				isVisited[i]=true;
//				func(nums,index+1,vec,s+std::to_string(nums[i]));
//				vec.pop_back();
//				isVisited[i]=false;
//			}
//		}
//		return;
//	}
//};
//class Solution {
//private:
//	vector<vector<int>> res;
//	vector<bool> isVisited;
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//		isVisited=vector<bool>(false,nums.size());
//		vector<int> vec;
//		func(nums,0,vec);
//		return res;
//    }
//	void func(const vector<int>& nums,int index,vector<int>& vec){
//		if(index==nums.size()){
//			res.push_back(vec);
//			
//		}else{
//		for(int i=0;i<nums.size();i++){
//			if(!isVisited[i]){
//				vec.push_back(nums[i]);
//				isVisited[i]=true;
//				func(nums,index+1,vec);
//				vec.pop_back();
//				isVisited[i]=false;
//			}
//		}
//        }
//		
//	}
//};