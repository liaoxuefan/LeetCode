#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	//遍历数组用非0元素覆盖前面的元素，后面添0
    void moveZeroes(vector<int>& nums) {
	   int i=0,k=0;
	   while(nums[i]!=0&&i<nums.size()){
		   i++;
	       k++;
	   }
	   for(i;i<nums.size();i++){
			if(nums[i])
				nums[k++]=nums[i];
	   }
	   for(k;k<nums.size();k++)
		   nums[k]=0;
	}

};

int main(){	
	int sum[]={0,1,0,3,12};
	vector<int> sums(sum,sum+sizeof(sum)/sizeof(sum[0]));
	Solution().moveZeroes(sums);
	vector<int>::iterator it;
	cout << '[';
    for (it =sums.begin(); it != sums.end(); it++){
		if(it!=sums.end()-1){
			cout << *it<<',';
		}else{
			cout << *it;
		}
	}
	cout<<']'<<endl;
	system("pause");
	return 0;
}

