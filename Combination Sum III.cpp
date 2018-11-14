#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
private:vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum3(int k,int n) {
        vector<int> vec;
		combinationSum(k,n,1,vec);
		return res;

    }
	void combinationSum(int k,int n,int index,vector<int> vec){
		if(n==0){
			if(vec.size()==k){
                res.push_back(vec);
            }
		}else if(n<0){
			return;
		}else{
			if(vec.size()==k){
				return;
			}
			for(int i=index;i<=9;i++){				
				vec.push_back(i);
				combinationSum(k,n-i,i+1,vec);
				vec.pop_back();
			}
		}
		return;
	}
};