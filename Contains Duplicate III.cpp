#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int i,j;
		if(nums.size()<2){
			return false;
		}
		for(i=0;i<nums.size();i++){
			for(j=i+1;j<nums.size();j++){
				if(abs(long(nums[i])-long(nums[j]))<=t&&j-i<=k){
					return true;
				}
			}
		}
		return false;
		
		/*set<long long> res;
		for(int i=0;i<nums.size();i++){
			if(res.lower_bound((long long)nums[i]-(long long)t)!=res.end()&&
				*res.lower_bound((long long)nums[i]-(long long)t)<=(long long)nums[i]+(long long)t){
				return true;
			}else{
				res.insert(nums[i]);
			}
			if(res.size()==k+1)
				res.erase(nums[i-k]);
		}
		return false;*/
    }
};

int main(){

	system("pause");
	return 0;
}


