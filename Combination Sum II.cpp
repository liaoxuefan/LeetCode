#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
private:vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> vec;
		sort(candidates.begin(),candidates.end());
		combinationSum(candidates,0,vec,target);
		return res;
    }
	void combinationSum(vector<int>& candidates, int index,vector<int> vec,int target){
		if(target==0){
			res.push_back(vec);
		}else if(target<0){
			return;
		}else{
			for(int i=index;i<candidates.size();i++){
				if(i>0&&candidates[i]==candidates[i-1]){
					//不是i>0而是i>index,下一次递归出现重复不影响(116)
					//但是当前递归的下一次循环重复的话会影响(1_25与_125)
					continue;
				}
				vec.push_back(candidates[i]);
				combinationSum(candidates,i+1,vec,target-candidates[i]);
				vec.pop_back();
			}
		}
		return;
	}
};