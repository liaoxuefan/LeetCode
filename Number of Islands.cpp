#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
	vector<vector<bool>> isVisited;
	int m,n;
	int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	bool isFind(int x,int y){
		return x>=0&&x<m&&y>=0&&y<n;
	}
	void convertTrue(vector<vector<char>>& grid,int startX,int startY){
		if(grid[startX][startY]-'0'==0||isVisited[startX][startY]==true){
			return;
		}
		isVisited[startX][startY]=true;
		for(int i=0;i<4;i++){
			int newX=startX+d[i][0];
			int newY=startY+d[i][1];
			if(isFind(newX,newY)){
				convertTrue(grid,newX,newY);
			}
		}
	}
    int numIslands(vector<vector<char>>& grid) {
		int res=0;
		m=grid.size();
		if (m==0) {
			return 0;
		}
		n=grid[0].size();
        isVisited=vector<vector<bool>>(m,vector<bool>(n,false));
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(isVisited[i][j]==false&&grid[i][j]-'0'==1){
					convertTrue(grid,i,j);
					res++;
				}
			}
		}
		return res;
    }
};