#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
private:vector<vector<int>> res;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<int> vec;
		sort(nums.begin(),nums.end());
        sub(nums,0,vec);
		return res;
    }
	void sub(vector<int>& nums,int index,vector<int> vec){
		res.push_back(vec);
		for(int i=index;i<nums.size();i++){
			if(i>index&&nums[i]==nums[i-1]){
				continue;
			}
			vec.push_back(nums[i]);
			sub(nums,i+1,vec);
			vec.pop_back();
		}
		return;

	}
};