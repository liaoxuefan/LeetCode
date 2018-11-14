#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<iterator>


using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		//��������ÿ��Ԫ�س��ֵĴ�����Ӧ��Ԫ�������������г��ֵĴ���һ�¡�
		//��仰˵��Ԫ�س��ֵĴ�������ֵ�й�ϵ
		//������������������
		/*map<int,int> nums;
		int i;
		for(i=0;i<nums1.size();i++){
			nums[nums1[i]]++;
		}
		vector<int> res;
		for(i=0;i<nums2.size();i++){
			if(nums[nums2[i]]>0){
				res.push_back(nums2[i]);
				nums[nums2[i]]--;
			}
		}
		return res;*/
		vector<int> res;
		int i;
		unordered_set<int> firstset;
		unordered_set<int> secondset;
		for(i=0;i<nums1.size();i++){
			firstset.insert(nums1[i]);
		}
		
		for(i=0;i<nums2.size();i++){
			if(firstset.find(nums2[i])!=firstset.end()){
					secondset.insert(nums2[i]);
			}
		}
		for(unordered_set<int>::iterator iter=secondset.begin();iter!=secondset.end();iter++){
			res.push_back(*iter);
		}
		return res;
    }
};

int main(){
	return 0;
}