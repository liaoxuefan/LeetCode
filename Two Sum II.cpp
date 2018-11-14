#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
		int i=0,j=numbers.size()-1;
		vector<int> res;
		while(i<j){
			if(numbers[i]+numbers[j]>target){
				j--;
			}else if(numbers[i]+numbers[j]<target){
				i++;
			}else{
				int index[]={++i,++j};
				//数组转换为vector
				res=vector<int>(index,index+2);
				return res;
			}
		}
    }
};

int main() {
	int num[]={2,7,11,15};
	int target=9;
	vector<int> nums(num,num+sizeof(num)/sizeof(num[0]));
	vector<int> res(2);
	res=Solution().twoSum(nums,target);
	//遍历元素
	vector<int>::iterator it;
	cout << '[';
    for (it =res.begin(); it != res.end(); it++){
		if(it!=res.end()-1){
			cout << *it<<',';
		}else{
			cout << *it;
		}
	}
	cout<<']'<<endl;
	system("pause");
	return 0;
}