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
					//����i>0����i>index,��һ�εݹ�����ظ���Ӱ��(116)
					//���ǵ�ǰ�ݹ����һ��ѭ���ظ��Ļ���Ӱ��(1_25��_125)
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