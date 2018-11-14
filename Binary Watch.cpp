//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//class Solution {
//public:	
//    vector<string> readBinaryWatch(int num) {
//		vector<string> res;
//		//vector<int> temp{1,2,4,8};
//		for(int i=0;i<=num;i++){
//			if(i>4||num-i>6){
//				continue;
//			}
//			vector<int> res1;
//			readTime(4,0,i,0,0,res1);
//			vector<int> res2;
//			readTime(6,0,num-i,0,0,res2);
//			for(auto j=res1.begin();j!=res1.end();j++){
//				for(auto k=res2.begin();k!=res2.end();k++){
//					if((*k)<10){
//						res.push_back(to_string(long long(*j))+":0"+to_string(long long(*k)));
//					}else{
//						res.push_back(to_string(*j)+":"+to_string(*k));
//					}					
//				}
//
//			}
//			/*for(int p:res1){
//				
//			}*/
//		}
//        return res;
//    }
//	void readTime(int nums,int index,int k,int sum,int n,vector<int>& res){
//		if(k==0){
//			res.push_back(0);
//		}
//		if(n==k){
//			if(sum<12&&nums==4||sum<60&&nums==6){
//				res.push_back(sum);
//			}else{
//				return;
//			}
//		}
//		for(int i=index;i<nums;i++){
//			readTime(nums,i+1,k,sum+pow(double(2),i),n+1,res);
//		}
//		return;
//	}
//};