#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>

using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int i,j,res=0;
		for(i=0;i<points.size();i++){
			unordered_map<int,int> map;
			//map<int,int> map;
			for(j=0;j<points.size();j++){
				if(i!=j){
					map[dis(points[i],points[j])]++;
				}
			}
			/*
			for(j=0;j<map.size();j++){
				if(map[j]>=2){
					res+=map[j]*(map[j]-1);
				}
			}
			*/
			//用迭代器不会超出时间限制
			for(unordered_map<int,int>::iterator iter=map.begin();iter!=map.end();iter++){
				if(iter->second>=2){
					res+=iter->second*(iter->second-1);
				}
			}
		}
		return res;
    }
private:
	int dis(const pair<int, int> &a,const pair<int, int> &b){
		return (a.first-b.first)*(a.first-b.first)+
			(a.second-b.second)*(a.second-b.second);
	}
};

