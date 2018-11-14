#include<iostream>
#include<vector>
#include<unordered_set>
#include<map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
		/*int l=0,r;
		if(nums.size()<2){
			return false;
		}	
		for(l;l<nums.size();l++){
			for(r=l+1;r<nums.size();r++){
				if(nums[l]==nums[r]&&r-l<=k){
					return true;
				}
			}
		}		
		return false;*/
		unordered_set<int> set;
		int l=0,r=0;
		for(l;r<nums.size();){
			for(r;r<=l+k&&r<nums.size();){
				if(set.find(nums[r])!=set.end()){
					return true;
				}else{
					set.insert(nums[r]);
					r++;
				}
			}
			set.erase(nums[l]);
			l++;
		}
		return false;
		//¼ò»¯ÈçÏÂ
		unordered_set<int> set;
		int i=0;
		for(i;i<nums.size();i++){
			if(set.find(nums[i])==set.end()){
				set.insert(nums[i]);
			}else{
				return;
			}
			if(set.size()==k+1){
				set.erase(nums[i-k]);
			}
		}
		return false;
    }
};