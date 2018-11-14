#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
private:
	int d[4][2];
	int m,n;
	vector<vector<bool>> isVisited;
public:
	bool isFind(int x,int y){
		return x>=0&&x<m&&y>=0&&y<n;
	}
	bool searchWord(vector<vector<char>>& board,int index,string word,int startX,int startY){
		if(index==word.size()-1){
			return board[startX][startY]==index;
		}
		if(board[startX][startY]==word[index]){
			//朝四个方向找
			isVisited[startX][startY]=true;
			for(int i=0;i<4;i++){
				int newX=startX+d[i][0];
				int newY=startY+d[i][1];
				//不能越界，不能重找
				if(isFind(newX,newY)&&!isVisited[newX][newY]&&
					board[newX][newY]==word[index+1]){
					return searchWord(board,index+1,word,newX,newY);
				}
			}
			isVisited[startX][startY]=false;
			return;
		}
		return false;
	}
    bool exist(vector<vector<char>>& board, string word) {
		m=board.size();
		n=board[0].size();
		d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
		isVisited=vector<vector<bool>>(m,vector<bool>(n,false));

		for(int i=0;i<board.size();i++){
			for(int j=0;j<board[0].size();j++){
				if(!searchWord(board,0,word,i,j)){
					continue;
				}else{
					return true;
				}
			}
		}
		return false;
    }
};