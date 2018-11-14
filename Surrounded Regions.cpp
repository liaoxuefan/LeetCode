#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
	int m,n;
	vector<vector<bool>> isVisited;
	int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	bool isFind(int x,int y){
		return x>=0&&x<m&&y>=0&&y<n;
	}
	void solve2(vector<vector<char>>& board,int startX,int startY){
		if(board[startX][startY]=='x'){
			return;
		}
		if(isVisited[startX][startY]==false){
			return;
		}
		isVisited[startX][startY]==false;
		for(int i=0;i<4;i++){
			int newX=startX+d[i][0];
			int newY=startY+d[i][1];
			if(isFind(newX,newY)){
				solve2(board,newX,newY);
			}
		}
		return;		
	}
    void solve(vector<vector<char>>& board) {		
		m=board.size();
		if(m==0){
			return;
		}
		n=board[0].size();
		isVisited=vector<vector<bool>>(m,vector<bool>(n,true));
		for(int i=0;i<n;i++){
			solve2(board,0,i);
			if(m-1>0){
				solve2(board,m-1,i);
			}		
		}
		for(int i=1;i<m-1;i++){
			solve2(board,i,0);
			if(n-1>0){
				solve2(board,i,n-1);
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(board[i][j]=='o'&&isVisited[i][j]==true){
					board[i][j]='x';
				}
			}
		}
		return;
    }
};
int main(){
	system("pause");
	return 0;
}