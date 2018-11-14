//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//class Solution {
//public:
//    int numSquares(int n) {
//		//用队列存放当前正整数&当前正整数与原数相差的平方数个数的数据对
//        queue<pair<int,int>> q;
//		q.push(make_pair(n,0));
//		//为避免重复数据多次入队所设置的标志位
//		vector<bool> res(n+1,false);
//		res[n]=true;
//		while(!q.empty()){
//			int num=q.front().first;
//			int step=q.front().second;
//			if(num==0){
//				return step;
//			}
//			//不断循环尝试不同平方数，直到当前正整数为0返回step
//			for(int i=1;num-i*i>=0;i++){
//				if(res[num-i*i]==false){
//					q.push(make_pair(num-i*i,step+1));
//					res[num-i*i]=true;
//				}
//			}
//			q.pop();
//		}
//    }
//};