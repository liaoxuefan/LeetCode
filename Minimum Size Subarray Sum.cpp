#include <iostream>
#include<vector>
#include<algorithm>
#include<cassert>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        /*int i,j,n=0,sum=0,m=0;
		if(nums.size()==0){
			return 0;
		}
		vector<int> res;
		for(i=0;i<nums.size();i++){
			j=i;
			while(j<nums.size()){
				sum+=nums[j];
				n++;
				if(sum>=s){
					res.push_back(n);
				}
				j++;
			}
			n=sum=0;
		}
		if(res.size()==0){
			return 0;
		}else{
			return *min_element(res.begin(),res.end());
		}*/


		//一开始区间里没有元素,数组不是有序的，所以r还能向右移
		//可利用三目运算符取最值
		int l=0,r=-1,n=0,sum=0;
		while(l<nums.size()){					
			if(r+1<nums.size()&&sum<s){
					r++;
					sum+=nums[r];
				}else{
					sum-=nums[l];
					l++;							
				}	
			if(sum>=s){
				if(n==0){
						n=r-l+1;
					}
					(n>r-l+1)?n=r-l+1:n=n;
			}
		}
		return n;
    }
};

int main(){
	int s = 11;int nums[]={1,2,3,4,5};
	cout<<Solution().minSubArrayLen(s,vector<int>(nums,nums+sizeof(nums)/sizeof(int)))<<endl;
	system("pause");
	return 0;
}