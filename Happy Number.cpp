#include <iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
       set<int> res;
	   int sum;
	   while(n!=1&&res.find(n)==res.end()){
		   res.insert(n);
		   sum=0;
		   while(n){
			   //��%10��ĩβһλȡ������/10������ĩβλ���������
				sum+= pow(double(n%10),2);
				n=n/10;
		   }
		   n=sum;
	   }
	   return n==1;
    }
};

int main(){
	return 0;
}