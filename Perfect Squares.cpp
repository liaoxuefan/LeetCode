//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//class Solution {
//public:
//    int numSquares(int n) {
//		//�ö��д�ŵ�ǰ������&��ǰ��������ԭ������ƽ�������������ݶ�
//        queue<pair<int,int>> q;
//		q.push(make_pair(n,0));
//		//Ϊ�����ظ����ݶ����������õı�־λ
//		vector<bool> res(n+1,false);
//		res[n]=true;
//		while(!q.empty()){
//			int num=q.front().first;
//			int step=q.front().second;
//			if(num==0){
//				return step;
//			}
//			//����ѭ�����Բ�ͬƽ������ֱ����ǰ������Ϊ0����step
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