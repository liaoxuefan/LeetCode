#include<iostream>
#include<vector>
#include<cassert>

using namespace std;

class Solution {
public:
	//时间复杂度：O(n)
	//空间复杂度：O(1)
    void sortColors(vector<int>& nums) {
		int i,j=0,sum[3]={0};
		for(i=0;i<nums.size();i++){
			sum[nums[i]]++;
		}
		for(i=0;i<sum[0];i++){
			nums[j++]=0;
		}
		for(i=0;i<sum[1];i++){
			nums[j++]=1;
		}
		for(i=0;i<sum[2];i++){
			nums[j++]=2;
		}
	}	
};

int main(){
	int Color[]={2,1,0,1,0};
	vector<int> nums(Color,Color+sizeof(Color)/sizeof(int));
	Solution().sortColors(nums);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<' ';
	}
	cout<<endl;
	system("pause");
	return 0;
}